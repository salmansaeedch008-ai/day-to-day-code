#include<iostream>
#include<fstream>                           //header files

using namespace std;

int main(){

    string find;
    string replace;                                   //declaring variables
    string x;

    ifstream myfile;                                 //using ifstream to read from the file
    myfile.open("data.txt");                           //opening the file

    if(!myfile){
        cout<<"error while opening the file"<<endl;                   //if file dont open
        return 0;                                                       //program will end
    }
    else{
    cout<<"enter the word to find : ";
    cin>>find;                                         //input the word to find

    cout<<"enter the word to replace : ";
    cin>>replace;                                      //input the word to replace
    cout<<endl; 

    string updated_line="";                           //initializing the updated line to a string
    bool found = true;                               //considerng word is found
    while(myfile>>x){                                //reading word by word from the file
        cout<<x<<" ";                               //printing the original line
        if(x==find){
            x = replace;                          //if word is found replace it with new world
            found=false;                          //if the world is found so found will be false
        }
        updated_line = updated_line + x + " ";                 //updating the updated line with the new world 
    }

    cout<<endl;

    if(found){                               //if the word is not found
        cout<<"word does not exist in the line : ";
    }
    else{
        myfile.close();
        ofstream myfile_2;                               //using ofstrream in the append mode to update the file
        myfile_2.open("data.txt", ios::app);
        myfile_2<<updated_line;                                //storing the updated line in the file
        cout<<updated_line;                                     //printing the updated line
        myfile_2.close();                                       //closing the file
    }
    }
    return 0;
}