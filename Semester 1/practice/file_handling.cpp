#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream myfile;
    myfile.open("name.txt", ios::in);

    if(!myfile){
        cout << "File not found!";
        return 0;
    }

    string x;
    myfile >> x;
    cout << x;

    myfile.close();
    return 0;
}

