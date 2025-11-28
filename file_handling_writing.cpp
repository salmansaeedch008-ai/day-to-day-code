#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream myfile;
    myfile.open("students.txt",ios::in);

    string searchname;
    cout<<"enter the name you want to search :";
    getline(cin,searchname);

    string x;
    while(getline(myfile,x)){
        if(searchname==x){
            cout<<"student founded!";
            myfile.close();
            return 0;
        }
    }

    cout<<"student not founded!";
	myfile.close();
	return 0;
}
