// task2.cpp
#include "Task2.h"

// Default constructor
String::String() {
    data = nullptr;
    size = 0;
}

// Constructor with C-string parameter
String::String(char* str) {
    // Calculate string length
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    // Set size and allocate memory
    size = length;
    data = new char[size + 1];
    
    // Copy the string
    for (int i = 0; i < size; i++) {
        data[i] = str[i];
    }
    data[size] = '\0';  // Null terminator
}

// Copy constructor
String::String(const String& str) {
    size = str.size;
    
    // Allocate memory and copy the string
    if (size > 0) {
        data = new char[size + 1];
        for (int i = 0; i < size; i++) {
            data[i] = str.data[i];
        }
        data[size] = '\0';
    } else {
        data = nullptr;
    }
}

// Constructor with preset size
String::String(int x) {
    size = x;
    data = new char[size + 1];
    
    // Initialize with null characters
    for (int i = 0; i < size; i++) {
        data[i] = '\0';
    }
    data[size] = '\0';
}

// Destructor
String::~String() {
    if (data != nullptr) {
        delete[] data;
    }
}

// Return the string data
char* String::getdata() {
    return data;
}

// Get character at index
char String::getChar(int i) const {
    if (i >= 0 && i < size) {
        return data[i];
    }
    return '\0';  // Return null character if index is out of bounds
}

// Append a String object
String String::append_string(const String& str) {
    // Calculate new size
    int newSize = size + str.size;
    
    // Create new string with combined size
    char* newData = new char[newSize + 1];
    
    // Copy current string
    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    
    // Append the second string
    for (int i = 0; i < str.size; i++) {
        newData[size + i] = str.data[i];
    }
    
    newData[newSize] = '\0';  // Null terminator
    
    // Create and return new String object
    String result;
    result.size = newSize;
    result.data = newData;
    
    return result;
}

// Append a character
String String::append_string(const char& c) {
    // Calculate new size
    int newSize = size + 1;
    
    // Create new string with increased size
    char* newData = new char[newSize + 1];
    
    // Copy current string
    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    
    // Append the character
    newData[size] = c;
    newData[newSize] = '\0';  // Null terminator
    
    // Create and return new String object
    String result;
    result.size = newSize;
    result.data = newData;
    
    return result;
}

// Append a C-string
String String::append_string(char* str) {
    // Calculate string length
    int strLen = 0;
    while (str[strLen] != '\0') {
        strLen++;
    }
    
    // Calculate new size
    int newSize = size + strLen;
    
    // Create new string with combined size
    char* newData = new char[newSize + 1];
    
    // Copy current string
    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    
    // Append the second string
    for (int i = 0; i < strLen; i++) {
        newData[size + i] = str[i];
    }
    
    newData[newSize] = '\0';  // Null terminator
    
    // Create and return new String object
    String result;
    result.size = newSize;
    result.data = newData;
    
    return result;
}

// Remove substring (String object)
String String::remove_string(const String& substr) {
    // Create new string to store result
    String result(*this);
    
    // Find the substring
    int index = result.index_at(substr);
    
    // If substring is found
    if (index != -1) {
        // Calculate new size
        int newSize = result.size - substr.size;
        
        // Create new string with reduced size
        char* newData = new char[newSize + 1];
        
        // Copy characters before the substring
        for (int i = 0; i < index; i++) {
            newData[i] = result.data[i];
        }
        
        // Copy characters after the substring
        for (int i = index + substr.size; i < result.size; i++) {
            newData[i - substr.size] = result.data[i];
        }
        
        newData[newSize] = '\0';  // Null terminator
        
        // Clean up old data and set new data
        delete[] result.data;
        result.data = newData;
        result.size = newSize;
    }
    
    return result;
}

// Remove substring (C-string)
String String::remove_string(const char* substr) {
    // Calculate substring length
    int substrLen = 0;
    while (substr[substrLen] != '\0') {
        substrLen++;
    }
    
    // Create a temporary String object from the C-string
    String tempSubstr;
    tempSubstr.size = substrLen;
    tempSubstr.data = new char[substrLen + 1];
    
    for (int i = 0; i < substrLen; i++) {
        tempSubstr.data[i] = substr[i];
    }
    tempSubstr.data[substrLen] = '\0';
    
    // Use the String version of remove_string
    String result = remove_string(tempSubstr);
    
    // Clean up temporary String
    delete[] tempSubstr.data;
    
    return result;
}

// Assign from another String
String String::assign_string(const String& str) {
    // Clean up old data
    if (data != nullptr) {
        delete[] data;
    }
    
    // Set new size
    size = str.size;
    
    // Allocate memory for new data
    data = new char[size + 1];
    
    // Copy the string
    for (int i = 0; i < size; i++) {
        data[i] = str.data[i];
    }
    data[size] = '\0';  // Null terminator
    
    return *this;
}

// Assign from a C-string
String String::assign_string(char* str) {
    // Calculate string length
    int strLen = 0;
    while (str[strLen] != '\0') {
        strLen++;
    }
    
    // Clean up old data
    if (data != nullptr) {
        delete[] data;
    }
    
    // Set new size
    size = strLen;
    
    // Allocate memory for new data
    data = new char[size + 1];
    
    // Copy the string
    for (int i = 0; i < size; i++) {
        data[i] = str[i];
    }
    data[size] = '\0';  // Null terminator
    
    return *this;
}

// Check if string is empty
bool String::isEmpty() const {
    return (size == 0 || data == nullptr);
}

// Compare with another String
bool String::isEqual(const String& str) const {
    // Check if sizes are different
    if (size != str.size) {
        return false;
    }
    
    // Compare character by character
    for (int i = 0; i < size; i++) {
        if (data[i] != str.data[i]) {
            return false;
        }
    }
    
    return true;
}

// Compare with a C-string
bool String::isEqual(const char* str) const {
    // Calculate string length
    int strLen = 0;
    while (str[strLen] != '\0') {
        strLen++;
    }
    
    // Check if sizes are different
    if (size != strLen) {
        return false;
    }
    
    // Compare character by character
    for (int i = 0; i < size; i++) {
        if (data[i] != str[i]) {
            return false;
        }
    }
    
    return true;
}

// Find index of a character
int String::index_at(char c) const {
    for (int i = 0; i < size; i++) {
        if (data[i] == c) {
            return i;
        }
    }
    
    return -1;  // Character not found
}

// Find index of a substring (String object)
int String::index_at(const String& str) const {
    // If substring is empty or larger than this string
    if (str.size == 0 || str.size > size) {
        return -1;
    }
    
    // Search for the substring
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
    
    return -1;  // Substring not found
}

// Find index of a substring (C-string)
int String::index_at(const char* str) const {
    // Calculate string length
    int strLen = 0;
    while (str[strLen] != '\0') {
        strLen++;
    }
    
    // If substring is empty or larger than this string
    if (strLen == 0 || strLen > size) {
        return -1;
    }
    
    // Search for the substring
    for (int i = 0; i <= size - strLen; i++) {
        bool found = true;
        
        for (int j = 0; j < strLen; j++) {
            if (data[i + j] != str[j]) {
                found = false;
                break;
            }
        }
        
        if (found) {
            return i;
        }
    }
    
    return -1;  // Substring not found
}

// Get the length of the string
int String::length() const {
    return size;
}