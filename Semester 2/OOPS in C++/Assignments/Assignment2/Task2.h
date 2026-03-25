#ifndef TASK2_H
#define TASK2_H

#include <string>
using std::string;

class String {
private:
    char* data;
    int size;

public:
    String();
    String(char* str);
    String(const char* str);
    String(const String& str);
    String(int x);

    ~String();

    char* getdata();
    char getChar(int i) const;

    String append_string(const String& str);
    String append_string(const char& c);
    String append_string(char* str);
    String append_string(const char* str);
    String append_string(string& str);

    String remove_string(const String& substr);
    String remove_string(const char* substr);
    String remove_string(const string& substr);
    String remove_string(const char& ch);

    String& assign_string(const String& str);
    String& assign_string(char* str);
    String& assign_string(const char* str);
    String& assign_string(const string& str);

    bool isEmpty() const;
    bool isEqual(const String& str) const;
    bool isEqual(const char* str) const;
    bool isEqual(const string& str) const;

    int index_at(char c) const;
    int index_at(const String& str) const;
    int index_at(const char* str) const;
    int index_at(const string& str) const;

    int length() const;

    String& operator=(const String& other);
};

#endif