#include "Task3.h"

// Constructor
BinaryStore::BinaryStore(int len) {
    head = nullptr;
    length = len;
}

// Destructor
BinaryStore::~BinaryStore() {
    Node* current = head;
    Node* next;
    
    while (current != nullptr) {
        next = current->next;
        delete[] current->address;
        if (current->value != nullptr) {
            delete[] current->value;
        }
        delete current;
        current = next;
    }
}

// Add a new address to the binary store
void BinaryStore::add_Address(char* s) {
    // Create a new node
    Node* newNode = new Node;
    
    // Allocate memory and copy the address
    newNode->address = new char[5]; // 4 characters + null terminator
    for (int i = 0; i < 4; i++) {
        newNode->address[i] = s[i];
    }
    newNode->address[4] = '\0';
    
    // Initialize value to NULL
    newNode->value = nullptr;
    
    // Set next pointer and update head
    newNode->next = head;
    head = newNode;
}

// Set a byte value at a given address
void BinaryStore::set_Byte(char* address, char* value) {
    Node* current = head;
    
    // Search for the address
    while (current != nullptr) {
        bool match = true;
        
        // Compare the address
        for (int i = 0; i < 4; i++) {
            if (current->address[i] != address[i]) {
                match = false;
                break;
            }
        }
        
        // If address found, set the value
        if (match) {
            // If value doesn't exist, allocate memory
            if (current->value == nullptr) {
                current->value = new char[9]; // 8 characters + null terminator
            }
            
            // Copy the value
            for (int i = 0; i < 8; i++) {
                current->value[i] = value[i];
            }
            current->value[8] = '\0';
            
            return;
        }
        
        current = current->next;
    }
    
    // If address not found, add it and then set the value
    add_Address(address);
    set_Byte(address, value);
}

// Get the byte value at a given address
char* BinaryStore::Get(char* address) {
    Node* current = head;
    
    // Search for the address
    while (current != nullptr) {
        bool match = true;
        
        // Compare the address
        for (int i = 0; i < 4; i++) {
            if (current->address[i] != address[i]) {
                match = false;
                break;
            }
        }
        
        // If address found, return the value
        if (match) {
            return current->value;
        }
        
        current = current->next;
    }
    
    // Address not found
    return nullptr;
}

// Convert the binary store to a string
char* BinaryStore::ToString() {
    // Allocate memory for the result
    // Each entry: 4 chars (address) + ':' + 8 chars (value) + '\n' = 14 chars
    char* result = new char[length * 14 + 1];
    int index = 0;
    
    Node* current = head;
    
    // Generate the string
    while (current != nullptr) {
        // Copy address
        for (int i = 0; i < 4; i++) {
            result[index++] = current->address[i];
        }
        
        // Add separator
        result[index++] = ':';
        
        // Copy value or zeros if value is NULL
        if (current->value != nullptr) {
            for (int i = 0; i < 8; i++) {
                result[index++] = current->value[i];
            }
        } else {
            for (int i = 0; i < 8; i++) {
                result[index++] = '0';
            }
        }
        
        // Add newline
        result[index++] = '\n';
        
        current = current->next;
    }
    
    // Add null terminator
    result[index] = '\0';
    
    return result;
}

// XOR operation (binary addition without carry)
char* BinaryStore::Add(char* a, char* b) {
    return binaryOperation(a, b, '+');
}

// Compare if two binary strings are equal
bool BinaryStore::comp_EQUAL(char* a, char* b) {
    // Compare each bit
    for (int i = 0; i < 8; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

// Perform a binary AND operation
char* BinaryStore::comp_AND(char* a, char* b) {
    return binaryOperation(a, b, '&');
}

// Perform a binary OR operation
char* BinaryStore::comp_OR(char* a, char* b) {
    return binaryOperation(a, b, '|');
}

// Perform a binary NOT operation (complement)
char* BinaryStore::comp_NOT(char* a) {
    // Allocate memory for the result
    char* result = new char[9]; // 8 characters + null terminator
    
    // Invert each bit
    for (int i = 0; i < 8; i++) {
        result[i] = (a[i] == '0') ? '1' : '0';
    }
    
    result[8] = '\0';
    
    return result;
}

// Helper function for binary operations
char* BinaryStore::binaryOperation(char* a, char* b, char op) {
    // Allocate memory for the result
    char* result = new char[9]; // 8 characters + null terminator
    
    // Perform the operation on each bit
    for (int i = 0; i < 8; i++) {
        if (op == '&') {
            // AND operation
            result[i] = ((a[i] == '1') && (b[i] == '1')) ? '1' : '0';
        } else if (op == '|') {
            // OR operation
            result[i] = ((a[i] == '1') || (b[i] == '1')) ? '1' : '0';
        } else if (op == '+') {
            // XOR operation (binary addition without carry)
            result[i] = (a[i] == b[i]) ? '0' : '1';
        }
    }
    
    result[8] = '\0';
    
    return result;
}