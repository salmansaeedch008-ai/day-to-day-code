#include<iostream>                           //header files
#include<fstream>

using namespace std;

int main(){
    int count = 0;                               //initializing total words to zero
    ifstream myfile;                             //using ifstream to read from the file
    myfile.open("text.txt");                       //opening the file

    if(!myfile){
        cout<<"Error opening file"<<endl;                //if file does not open
        return 0;                                       //program will end
    }
    else{
    string x;
    while(!myfile.eof()){                   //loop runs till the end of the file 
        myfile>>x;
        cout<<x<<" ";
        count++;                            //if it reads one word count will be increased by one
    }

    cout<<endl;
 
    cout<<"Number of words in the file: "<<count<<endl;                  //printing total number of words

    myfile.close();                                                  //closing the file
 
    }

    return 0;
}