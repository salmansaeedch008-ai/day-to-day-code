#include<iostream>

using namespace std;

const int total_students = 25;

void present_studdents(int students[]){
    bool found = false;
    cout<<"present students : ";
    for(int i=0 ; i<total_students ; i++){
        if(students[i]==1){
            cout<<i+1<<" ";
            found = true;
        }
    }
    if(!found){
        cout<<"none!";
    }
    cout<<endl;
}

void absent_students(int students[]){
    bool found = false;
    cout<<"absent students : ";
    for(int i=0 ; i<total_students ; i++){
        if(students[i]==0){
            cout<<i+1<<" ";
            found = true;
        }
    }
    if(!found){
        cout<<"none!";
    }
    cout<<endl;
}

int main(){
    int choice;
    int students[total_students]={0};
    int attend;
    int roll_number;
    do{
        cout<<"\n-------attendane system-------\n";
        cout<<"1-mark attendane!\n";
        cout<<"2-dispaly present students\n";
        cout<<"3-dispaly absent students\n";
        cout<<"4-reset attendance\n";
        cout<<"5-exit program\n";
        cout<<"enter your choice : ";
        cin>>choice;

        switch(choice){
            case 1 :
            cout<<"enter roll number(1-25)";
            cin>>roll_number;
            if(roll_number<1 || roll_number>25){
                cout<<"invlid roll number.";
            }
            else if(students[roll_number-1]==1 || students[roll_number-1]==0){
                cout<<"enter attendance (1=preset) , (0=absent) : ";
                cin>>attend;
                if(attend==0){
                    students[roll_number-1]=0;
                    cout<<"attendance marked successfully";
                }
                else{
                    students[roll_number-1]=1;
                    cout<<"attendance marked successfully";
                }
            }
            else{
                cout<<"enter valid attendance.";
            }
            break;

            case 2:
            present_studdents(students);
            break;


            case 3 :
            absent_students(students);
            break;

            case 4:
            students[total_students]={0};
            cout<<"attendence reset successful ";
            break;
            
            case 5 :
            cout<<"exiting the program...";
            return 0;


        }

    }while(choice!=5);


    return 0;
}