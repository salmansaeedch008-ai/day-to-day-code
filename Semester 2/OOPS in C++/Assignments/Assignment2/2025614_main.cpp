#include <iostream>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"

using namespace std;

void testTask1() {
    cout << "\n=============================================\n";
    cout << "TESTING TASK 1: ZooChain Implementation\n";
    cout << "=============================================\n";
    
    // Create a new ZooChain
    ZooChain zoo;
    
    cout << "\nAdding cages...\n";
    zoo.add_Cage("Lion", 5);
    zoo.add_Cage("Tiger", 3);
    zoo.add_Cage("Elephant", 1);
    zoo.add_Cage("Giraffe", 7);
    zoo.add_Cage("Monkey", 2);
    zoo.add_Cage("Lion", 5);  // Duplicate cage number
    
    cout << "\nPrinting the chain (before sorting):\n";
    zoo.print_Chain();
    
    cout << "\nSorting the chain by cage number...\n";
    zoo.Sort_Chain();
    
    cout << "\nPrinting the chain (after sorting):\n";
    zoo.print_Chain();
    
    cout << "\nUpdating name at cage number 1...\n";
    zoo.update_name_at_cageNumber(1, "African Elephant");
    
    cout << "\nPrinting the chain (after update):\n";
    zoo.print_Chain();
    
    cout << "\nRemoving duplicate cages...\n";
    zoo.remove_Duplicate();
    
    cout << "\nPrinting the chain (after removing duplicates):\n";
    zoo.print_Chain();
    
    cout << "\nDeleting cage number 3...\n";
    zoo.delete_Chain(3);
    
    cout << "\nPrinting the chain (after deletion):\n";
    zoo.print_Chain();
}

void testTask2() {
    cout << "\n=============================================\n";
    cout << "TESTING TASK 2: String Class Implementation\n";
    cout << "=============================================\n";
    
    // Test default constructor
    String s1;
    cout << "\nTesting default constructor:\n";
    cout << "s1 is empty: " << (s1.isEmpty() ? "true" : "false") << endl;
    
    // Test constructor with C-string
    char str1[] = "Hello";
    String s2(str1);
    cout << "\nTesting constructor with C-string:\n";
    cout << "s2: " << s2.getdata() << endl;
    cout << "Length of s2: " << s2.length() << endl;
    
    // Test copy constructor
    String s3(s2);
    cout << "\nTesting copy constructor:\n";
    cout << "s3 (copy of s2): " << s3.getdata() << endl;
    
    // Test constructor with preset size
    String s4(10);
    cout << "\nTesting constructor with preset size:\n";
    cout << "s4 is empty: " << (s4.isEmpty() ? "true" : "false") << endl;
    cout << "Length of s4: " << s4.length() << endl;
    
    // Test append string
    char str2[] = " World";
    String s5(str2);
    String s6 = s2.append_string(s5);
    cout << "\nTesting append string:\n";
    cout << "s6 (s2 + s5): " << s6.getdata() << endl;
    
    // Test append character
    String s7 = s6.append_string('!');
    cout << "\nTesting append character:\n";
    cout << "s7 (s6 + '!'): " << s7.getdata() << endl;
    
    // Test append C-string
    char str3[] = " How are you?";
    String s8 = s7.append_string(str3);
    cout << "\nTesting append C-string:\n";
    cout << "s8 (s7 + 'How are you?'): " << s8.getdata() << endl;
    
    // Test getChar
    cout << "\nTesting getChar:\n";
    cout << "Character at index 0 of s8: " << s8.getChar(0) << endl;
    cout << "Character at index 5 of s8: " << s8.getChar(5) << endl;
    
    // Test isEqual
    cout << "\nTesting isEqual:\n";
    cout << "s2 equals s3: " << (s2.isEqual(s3) ? "true" : "false") << endl;
    cout << "s2 equals s5: " << (s2.isEqual(s5) ? "true" : "false") << endl;
    
    // Test index_at (character)
    cout << "\nTesting index_at (character):\n";
    cout << "Index of 'W' in s8: " << s8.index_at('W') << endl;
    cout << "Index of 'Z' in s8: " << s8.index_at('Z') << endl;
    
    // Test index_at (string)
    cout << "\nTesting index_at (string):\n";
    String search("World");
    cout << "Index of 'World' in s8: " << s8.index_at(search) << endl;
    
    // Test index_at (C-string)
    cout << "\nTesting index_at (C-string):\n";
    char search2[] = "How";
    cout << "Index of 'How' in s8: " << s8.index_at(search2) << endl;
    
    // Test remove_string
    String s9 = s8.remove_string(search);
    cout << "\nTesting remove_string:\n";
    cout << "s9 (s8 with 'World' removed): " << s9.getdata() << endl;
    
    // Test assign_string
    String s10;
    s10 = s10.assign_string(s2);
    cout << "\nTesting assign_string:\n";
    cout << "s10 (assigned from s2): " << s10.getdata() << endl;
}

void testTask3() {
    cout << "\n=============================================\n";
    cout << "TESTING TASK 3: BinaryStore Implementation\n";
    cout << "=============================================\n";
    
    // Create a BinaryStore
    BinaryStore store(5);
    
    cout << "\nAdding addresses and setting bytes...\n";
    
    // Add addresses and set bytes
    store.add_Address("A001");
    store.set_Byte("A001", "10101010");
    
    store.add_Address("B002");
    store.set_Byte("B002", "11001100");
    
    store.add_Address("C003");
    store.set_Byte("C003", "11110000");
    
    // Set byte for a new address
    store.set_Byte("D004", "00001111");
    
    // Display the BinaryStore
    cout << "\nBinaryStore contents:\n";
    cout << store.ToString();
    
    // Test Get function
    cout << "\nTesting Get function:\n";
    cout << "Byte at A001: " << store.Get("A001") << endl;
    cout << "Byte at B002: " << store.Get("B002") << endl;
    cout << "Byte at C003: " << store.Get("C003") << endl;
    cout << "Byte at D004: " << store.Get("D004") << endl;
    
    // Test binary operations
    cout << "\nTesting binary operations:\n";
    
    // Add (XOR)
    char* addResult = store.Add(store.Get("A001"), store.Get("B002"));
    cout << "A001 XOR B002: " << addResult << endl;
    
    // AND
    char* andResult = store.comp_AND(store.Get("A001"), store.Get("B002"));
    cout << "A001 AND B002: " << andResult << endl;
    
    // OR
    char* orResult = store.comp_OR(store.Get("A001"), store.Get("B002"));
    cout << "A001 OR B002: " << orResult << endl;
    
    // NOT
    char* notResult = store.comp_NOT(store.Get("A001"));
    cout << "NOT A001: " << notResult << endl;
    
    // EQUAL
    bool equalResult = store.comp_EQUAL(store.Get("A001"), store.Get("B002"));
    cout << "A001 EQUALS B002: " << (equalResult ? "true" : "false") << endl;
    
    // Clean up dynamically allocated memory
    delete[] addResult;
    delete[] andResult;
    delete[] orResult;
    delete[] notResult;
}

void testTask4() {
    cout << "\n=============================================\n";
    cout << "TESTING TASK 4: Record Management Implementation\n";
    cout << "=============================================\n";
    
    // Create a Record with file name
    char fileName[] = "student_records.txt";
    Record records(fileName);
    
    // Input records (comment this out to avoid interactive input during automated testing)
    cout << "\nInput a new record:\n";
    records.record_Input();
    
    // Display all records
    cout << "\nDisplaying all records:\n";
    records.record_Display();
    
    // Count records
    cout << "\nCounting records:\n";
    int count = records.record_Count();
    
    // Search for a record (comment this out to avoid interactive input during automated testing)
    cout << "\nSearching for a record:\n";
    records.record_Search();
    
    // Insert a record (comment this out to avoid interactive input during automated testing)
    cout << "\nInserting a record:\n";
    records.record_Insert();
    
    // Display all records after insertion
    cout << "\nDisplaying all records after insertion:\n";
    records.record_Display();
    
    // Replace a record (comment this out to avoid interactive input during automated testing)
    cout << "\nReplacing a record:\n";
    records.record_Replace();
    
    // Display all records after replacement
    cout << "\nDisplaying all records after replacement:\n";
    records.record_Display();
    
    // Delete a record (comment this out to avoid interactive input during automated testing)
    cout << "\nDeleting a record:\n";
    records.delete_Record();
    
    // Display all records after deletion
    cout << "\nDisplaying all records after deletion:\n";
    records.record_Display();
}

int main() {
    cout << "Object Oriented Programming and Design - Assignment #2\n";
    
    // Test Task 1
    testTask1();
    
    // Test Task 2
    testTask2();
    
    // Test Task 3
    testTask3();
    
    // Test Task 4
    // Uncomment the following line to test Task 4 (requires user input)
    // testTask4();
    
    return 0;
}