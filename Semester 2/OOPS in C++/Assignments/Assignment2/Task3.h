#ifndef TASK3_H
#define TASK3_H

class BinaryStore {
private:
    struct Node {
        char* address; // 4 characters for address
        char* value;   // 8 characters for binary value
        Node* next;
    };
    
    Node* head;
    int length;

    // Helper function for binary operations
    char* binaryOperation(char* a, char* b, char op);

public:
    BinaryStore(int len);
    ~BinaryStore();

    void add_Address(char* s);
    void set_Byte(char* address, char* value);
    char* Get(char* address);
    char* ToString();

    char* Add(char* a, char* b);
    bool comp_EQUAL(char* a, char* b);
    char* comp_AND(char* a, char* b);
    char* comp_OR(char* a, char* b);
    char* comp_NOT(char* a);
};

#endif
