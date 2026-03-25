// task1.cpp
#include "Task1.h"

// Constructor
ZooChain::ZooChain() {
    start = NULL;
}

// Function to add a new cage
void ZooChain::add_Cage(char *name, int cageNumber) {
    // Create a new cage
    ZooCage *newCage = new ZooCage;
    
    // Calculate string length
    int length = 0;
    while (name[length] != '\0') {
        length++;
    }
    
    // Allocate memory for the name
    newCage->name = new char[length + 1];
    
    // Copy name character by character
    for (int i = 0; i < length; i++) {
        newCage->name[i] = name[i];
    }
    newCage->name[length] = '\0';  // Null terminator
    
    // Set cage number and initialize link
    newCage->cageNumber = cageNumber;
    newCage->link = NULL;
    
    // If the chain is empty, set the new cage as the start
    if (start == NULL) {
        start = newCage;
    } else {
        // Otherwise, add the new cage at the end of the chain
        ZooCage *current = start;
        while (current->link != NULL) {
            current = current->link;
        }
        current->link = newCage;
    }
}

// Function to print the chain
void ZooChain::print_Chain() {
    ZooCage *current = start;
    
    while (current != NULL) {
        cout << "Cage Number: " << current->cageNumber << ", Animal: " << current->name << endl;
        current = current->link;
    }
}

// Function to delete a cage by cage number
void ZooChain::delete_Chain(int cageNumber) {
    // If the chain is empty, return
    if (start == NULL) {
        return;
    }
    
    // If the cage to delete is the first one
    if (start->cageNumber == cageNumber) {
        ZooCage *temp = start;
        start = start->link;
        delete[] temp->name;
        delete temp;
        return;
    }
    
    // Search for the cage to delete
    ZooCage *current = start;
    ZooCage *prev = NULL;
    
    while (current != NULL && current->cageNumber != cageNumber) {
        prev = current;
        current = current->link;
    }
    
    // If the cage was not found, return
    if (current == NULL) {
        return;
    }
    
    // Remove the cage from the chain
    prev->link = current->link;
    delete[] current->name;
    delete current;
}

// Function to sort the chain by cage number (using bubble sort)
void ZooChain::Sort_Chain() {
    // If the chain is empty or has only one element, return
    if (start == NULL || start->link == NULL) {
        return;
    }
    
    bool swapped;
    ZooCage *current;
    ZooCage *last = NULL;
    
    do {
        swapped = false;
        current = start;
        
        while (current->link != last) {
            if (current->cageNumber > current->link->cageNumber) {
                // Swap cage numbers
                int tempNumber = current->cageNumber;
                current->cageNumber = current->link->cageNumber;
                current->link->cageNumber = tempNumber;
                
                // Swap names (pointers only, not the content)
                char *tempName = current->name;
                current->name = current->link->name;
                current->link->name = tempName;
                
                swapped = true;
            }
            current = current->link;
        }
        last = current;
    } while (swapped);
}

// Function to update the name of a cage by cage number
void ZooChain::update_name_at_cageNumber(int cageNumber, char *name) {
    ZooCage *current = start;
    
    // Search for the cage with the given number
    while (current != NULL) {
        if (current->cageNumber == cageNumber) {
            // Calculate length of the new name
            int length = 0;
            while (name[length] != '\0') {
                length++;
            }
            
            // Free the old name and allocate memory for the new name
            delete[] current->name;
            current->name = new char[length + 1];
            
            // Copy the new name
            for (int i = 0; i < length; i++) {
                current->name[i] = name[i];
            }
            current->name[length] = '\0';
            
            return;
        }
        current = current->link;
    }
}

// Function to remove duplicate cages (based on cage number)
void ZooChain::remove_Duplicate() {
    // If the chain is empty or has only one element, return
    if (start == NULL || start->link == NULL) {
        return;
    }
    
    ZooCage *current = start;
    
    while (current != NULL) {
        ZooCage *runner = current;
        
        while (runner->link != NULL) {
            if (current->cageNumber == runner->link->cageNumber) {
                // Duplicate found, remove it
                ZooCage *duplicate = runner->link;
                runner->link = runner->link->link;
                delete[] duplicate->name;
                delete duplicate;
            } else {
                runner = runner->link;
            }
        }
        
        current = current->link;
    }
}

// Destructor
ZooChain::~ZooChain() {
    ZooCage *current = start;
    ZooCage *next;
    
    while (current != NULL) {
        next = current->link;
        delete[] current->name;
        delete current;
        current = next;
    }
    
    start = NULL;
}