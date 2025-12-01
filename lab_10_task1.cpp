#include<iostream>                //header files
#include<fstream>

using namespace std;

int main(){
    ofstream myfile;                          //using ofstream to write in the file
    myfile.open("example.txt");

    if(!myfile){
        cout<<"Error opening file"<<endl;            //if file does not open 
        return 0;                               //program will end
    }
    else{
    cout<<"Writing to the file....."<<endl<<endl;
    myfile<<"Hello, World!"<<endl;                             //writing hello world in the file
    cout<<"File written successfully."<<endl<<endl;              //indicating file is written successfully

    myfile.close();                              //closing the file
    }
    ifstream myfile_2;
    myfile_2.open("example.txt");                              //using ifstream in the same file to read that file

    if(!myfile_2){
        cout<<"Error opening file"<<endl;                   //if file does not open 
        return 0;                                           //program will end
    } 
    else{
    cout<<"Reading from the file....."<<endl<<endl;
    string x;

    while(getline(myfile_2, x)){                    //using getline to also read the spaces and while tpo read till end of file
        cout<<x<<endl;
    }

    cout<<"This is a file handling example."<<endl;

    myfile_2.close();                                  //closing the file
    }
    return 0;
}