#include<iostream>

using namespace std;

struct IssueRecord{
    int itemId;
    int userId;
};

class LibraryItem{
    protected:
    int ItemId;
    string Title;
    bool Availability;

    public:
    LibraryItem(int id , string t){
        ItemId = id;
        Title = t;
        Availability = true;
    }

    int getID() { return ItemId; }

    bool isAvailable() { return Availability; }

    void setAvailability(bool status) {
        Availability = status;
    }

    virtual void displayDetails() {
        cout << "ID: " << ItemId << ", Title: " << Title;
        cout << ", Available: " << (Availability ? "Yes" : "No") << endl;
    }
};

class Book :public LibraryItem{
    protected:
    string Author;
    int pages;

    public:
    Book(int id, string t, string a, int p): LibraryItem(id, t) {
        Author = a;
        pages = p;
    }

    void displayDetails() {
        LibraryItem::displayDetails();
        cout << "Author: " << Author << ", Pages: " << pages << endl;
    }
};

class Magazine : public LibraryItem{
    protected:
    int issueNumber;

    public:
    Magazine(int id, string t, int issue): LibraryItem(id, t) {
        issueNumber = issue;
    }

    void displayDetails() {
        LibraryItem::displayDetails();
        cout << "Issue Number: " << issueNumber << endl;
    }
};

class Ebook : public LibraryItem{
    protected:
    int fileSize;
    string format;

    public:
    Ebook(int id , string t , int size , string form):LibraryItem(id , t){ 
        fileSize = size;
        format = form;
    }

    void displayDetails(){
        LibraryItem::displayDetails();
        cout<<"File Size: "<<fileSize<<" , Format: "<<format<<endl;
    }
};

class Users{
    protected:
    int UserId;
    string Name;

    public:
    Users(int id, string n) {
        UserId = id;
        Name = n;
    }

    int getID() { return UserId; }

    virtual void display() {
        cout << "User ID: " << UserId << ", Name: " << Name << endl;
    }
};

class Student : public Users{
    protected:
    string department;

    public:
    Student(int id, string n, string d): Users(id, n) {
        department = d;
    }

    void display() {
        Users::display();
        cout << "Department: " << department << endl;
    }
};

class Teacher : public Users{
    protected:
    string Designation;

    public:
    Teacher(int id , string n , string des):Users(id , n){
        Designation = des;
    }

    void display(){
        Users::display();
        cout<<"Designation: "<<Designation<<endl;
    }
};

int main(){
    LibraryItem* items[100];
    Users* users[100];
    IssueRecord records[100];

    int itemCount = 0, userCount = 0, recordCount = 0;

    int choice;

    do {
        cout << "\n1. Add Item\n2. Add User\n3. Display Items\n4. Issue Item\n5. Return Item\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int type, id;
            string title;

            cout << "1. Book 2. Magazine 3. EBook\n";
            cin >> type;

            cout << "Enter ID and Title: ";
            cin >> id >> title;

            if (type == 1) {
                string author;
                int pages;
                cout << "Enter Author and Pages: ";
                cin >> author >> pages;

                items[itemCount++] = new Book(id, title, author, pages);
            }
            else if (type == 2) {
                int issue;
                cout << "Enter Issue Number: ";
                cin >> issue;

                items[itemCount++] = new Magazine(id, title, issue);
            }
            else if (type == 3) {
                float size;
                string format;
                cout << "Enter File Size and Format: ";
                cin >> size >> format;

                items[itemCount++] = new Ebook(id, title, size, format);
            }
        }

        else if (choice == 2) {
            int type, id;
            string name;

            cout << "1. Student 2. Teacher\n";
            cin >> type;

            cout << "Enter ID and Name: ";
            cin >> id >> name;

            if (type == 1) {
                string dept;
                cout << "Enter Department: ";
                cin >> dept;

                users[userCount++] = new Student(id, name, dept);
            }
            else {
                string des;
                cout << "Enter Designation: ";
                cin >> des;

                users[userCount++] = new Teacher(id, name, des);
            }
        }

        else if (choice == 3) {
            for (int i = 0; i < itemCount; i++) {
                items[i]->displayDetails();
                cout << "------------------\n";
            }
        }

        else if (choice == 4) {
            int itemID, userID;
            cout << "Enter Item ID and User ID: ";
            cin >> itemID >> userID;

            for (int i = 0; i < itemCount; i++) {
                if (items[i]->getID() == itemID && items[i]->isAvailable()) {
                    items[i]->setAvailability(false);

                    records[recordCount].itemId = itemID;
                    records[recordCount].userId = userID;
                    recordCount++;

                    cout << "Item Issued Successfully\n";
                    break;
                }
            }
        }

        else if (choice == 5) {
            int itemID;
            cout << "Enter Item ID to return: ";
            cin >> itemID;

            for (int i = 0; i < itemCount; i++) {
                if (items[i]->getID() == itemID) {
                    items[i]->setAvailability(true);
                    cout << "Item Returned Successfully\n";
                    break;
                }
            }
        }

    } while (choice != 6);


    return 0 ;
}