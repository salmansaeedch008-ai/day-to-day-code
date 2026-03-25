#include "Task2.h"

static int str_len(const char* s) {
    if (s == nullptr) return 0;
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

String::String() {
    size = 0;
    data = new char[1];
    data[0] = '\0';
}

String::String(char* str) {
    int len = str_len(str);
    size = len;
    data = new char[size + 1];
    for (int i = 0; i < size; i++) {
        data[i] = str[i];
    }
    data[size] = '\0';
}

String::String(const char* str) {
    int len = str_len(str);
    size = len;
    data = new char[size + 1];
    for (int i = 0; i < size; i++) {
        data[i] = str[i];
    }
    data[size] = '\0';
}

String::String(const String& str) {
    size = str.size;
    data = new char[size + 1];
    for (int i = 0; i < size; i++) {
        data[i] = str.data[i];
    }
    data[size] = '\0';
}

String::String(int x) {
    if (x < 0) x = 0;
    data = new char[x + 1];
    data[0] = '\0';
    size = 0;
}

String::~String() {
    delete[] data;
}

String& String::operator=(const String& other) {
    if (this != &other) {
        char* newData = new char[other.size + 1];
        for (int i = 0; i < other.size; i++) {
            newData[i] = other.data[i];
        }
        newData[other.size] = '\0';

        delete[] data;
        data = newData;
        size = other.size;
    }
    return *this;
}

char* String::getdata() {
    return data;
}

char String::getChar(int i) const {
    if (i < 0 || i >= size) {
        return '\0';
    }
    return data[i];
}

String String::append_string(const String& str) {
    int newSize = size + str.size;
    char* newData = new char[newSize + 1];

    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    for (int i = 0; i < str.size; i++) {
        newData[size + i] = str.data[i];
    }
    newData[newSize] = '\0';

    delete[] data;
    data = newData;
    size = newSize;

    return *this;
}

String String::append_string(const char& c) {
    int newSize = size + 1;
    char* newData = new char[newSize + 1];

    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    newData[size] = c;
    newData[newSize] = '\0';

    delete[] data;
    data = newData;
    size = newSize;

    return *this;
}

String String::append_string(char* str) {
    return append_string((const char*)str);
}

String String::append_string(const char* str) {
    int len = str_len(str);
    int newSize = size + len;
    char* newData = new char[newSize + 1];

    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    for (int i = 0; i < len; i++) {
        newData[size + i] = str[i];
    }
    newData[newSize] = '\0';

    delete[] data;
    data = newData;
    size = newSize;

    return *this;
}

String String::append_string(string& str) {
    return append_string(str.c_str());
}

String String::remove_string(const String& substr) {
    int idx = index_at(substr);
    if (idx == -1) {
        return *this;
    }

    int newSize = size - substr.size;
    char* newData = new char[newSize + 1];
    int k = 0;

    for (int i = 0; i < idx; i++) {
        newData[k++] = data[i];
    }
    for (int i = idx + substr.size; i < size; i++) {
        newData[k++] = data[i];
    }
    newData[k] = '\0';

    delete[] data;
    data = newData;
    size = newSize;

    return *this;
}

String String::remove_string(const char* substr) {
    String temp(substr);
    return remove_string(temp);
}

String String::remove_string(const string& substr) {
    return remove_string(substr.c_str());
}

String String::remove_string(const char& ch) {
    int idx = index_at(ch);
    if (idx == -1) {
        return *this;
    }

    int newSize = size - 1;
    char* newData = new char[newSize + 1];
    int k = 0;

    for (int i = 0; i < size; i++) {
        if (i != idx) {
            newData[k++] = data[i];
        }
    }
    newData[k] = '\0';

    delete[] data;
    data = newData;
    size = newSize;

    return *this;
}

String& String::assign_string(const String& str) {
    if (this != &str) {
        char* newData = new char[str.size + 1];
        for (int i = 0; i < str.size; i++) {
            newData[i] = str.data[i];
        }
        newData[str.size] = '\0';

        delete[] data;
        data = newData;
        size = str.size;
    }
    return *this;
}

String& String::assign_string(char* str) {
    return assign_string((const char*)str);
}

String& String::assign_string(const char* str) {
    int len = str_len(str);
    char* newData = new char[len + 1];

    for (int i = 0; i < len; i++) {
        newData[i] = str[i];
    }
    newData[len] = '\0';

    delete[] data;
    data = newData;
    size = len;

    return *this;
}

String& String::assign_string(const string& str) {
    return assign_string(str.c_str());
}

bool String::isEmpty() const {
    return size == 0;
}

bool String::isEqual(const String& str) const {
    if (size != str.size) {
        return false;
    }
    for (int i = 0; i < size; i++) {
        if (data[i] != str.data[i]) {
            return false;
        }
    }
    return true;
}

bool String::isEqual(const char* str) const {
    int len = str_len(str);
    if (size != len) {
        return false;
    }
    for (int i = 0; i < size; i++) {
        if (data[i] != str[i]) {
            return false;
        }
    }
    return true;
}

bool String::isEqual(const string& str) const {
    return isEqual(str.c_str());
}

int String::index_at(char c) const {
    for (int i = 0; i < size; i++) {
        if (data[i] == c) {
            return i;
        }
    }
    return -1;
}

int String::index_at(const String& str) const {
    if (str.size == 0 || str.size > size) {
        return -1;
    }

    for (int i = 0; i <= size - str.size; i++) {
        bool found = true;
        for (int j = 0; j < str.size; j++) {
            if (data[i + j] != str.data[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    return -1;
}

int String::index_at(const char* str) const {
    int len = str_len(str);
    if (len == 0 || len > size) {
        return -1;
    }

    for (int i = 0; i <= size - len; i++) {
        bool found = true;
        for (int j = 0; j < len; j++) {
            if (data[i + j] != str[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    return -1;
}

int String::index_at(const string& str) const {
    return index_at(str.c_str());
}

int String::length() const {
    return size;
}