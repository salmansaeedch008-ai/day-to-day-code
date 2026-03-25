#ifndef TASK2_H
#define TASK2_H

class String {
private:
    char* data;
    int size;  // Length of the string

public:
    // Constructors
    String();
    String(char* str);
    String(const String& str);
    String(int x);

    // Destructor
    ~String();

    // Getter functions
    char* getdata();
    char getChar(int i) const;

    // String manipulation functions
    String append_string(const String& str);
    String append_string(const char& c);
    String append_string(char* str);

    String remove_string(const String& substr);
    String remove_string(const char* substr);

    String assign_string(const String& str);
    String assign_string(char* str);

    // Comparison functions
    bool isEmpty() const;
    bool isEqual(const String& str) const;
    bool isEqual(const char* str) const;

    // Search functions
    int index_at(char c) const;
    int index_at(const String& str) const;
    int index_at(const char* str) const;

    // Utility functions
    int length() const;
};

#endif