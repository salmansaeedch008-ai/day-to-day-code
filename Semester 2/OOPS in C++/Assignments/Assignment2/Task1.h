// task1.h
#ifndef TASK1_H
#define TASK1_H

#include <iostream>

using namespace std;

// Structure representing a zoo cage
struct ZooCage {
    char *name;
    int cageNumber;
    ZooCage *link;
};

// Class to manage a chain of ZooCage objects
class ZooChain {
public:
    ZooCage *start;

    ZooChain();  // Constructor
    ~ZooChain(); // Destructor

    void add_Cage(char *name, int cageNumber);
    void print_Chain();
    void delete_Chain(int cageNumber);
    void Sort_Chain();
    void update_name_at_cageNumber(int cageNumber, char *name);
    void remove_Duplicate();
};

#endif