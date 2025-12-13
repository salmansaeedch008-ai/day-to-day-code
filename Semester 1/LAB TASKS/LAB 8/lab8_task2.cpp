#include<iostream>  //HEADER FILE 
#include<string>  //for storing strings in arrays (library string is used)

using namespace std;

int main(){
    int num_halls = 2;   //total number of halls are 2
    int num_days = 3;    //total number of days are 3 
    int num_showtimes = 1;   //total number of showtimes 1
    
    string shedule[num_halls][num_days][num_showtimes];    //declaraing a 3D Array
    for(int i=0 ; i<num_halls ; i++){
        for(int j=0 ; j<num_days ; j++){
            for(int k=0 ; k<num_showtimes ; k++){
                shedule[i][j][k]="UNSET";            //initialzing every element to unset (no movie is sheduled yet in any hall).
            }
        }
    }

    cout<<"Enter movie names for 2 halls for a 3 day shedule . "<<endl;

    for(int i=0 ; i<num_halls ; i++){
        for(int j=0 ; j<num_days ; j++){
            for(int k=0 ; k<num_showtimes ; k++){
            cout<<"Enter movie for Hall "<<i<<",Day"<<j<<",showtime 0: ";   // taking input of every movie in particular day and hall
            getline(cin , shedule[i][j][k]);        // also prints the space and second word(if two words are written along with space)
        }
    }
}

    cout<<endl;
    
    cout<<"================================="<<endl;
    cout<<"Final 3-Day movie shedule : "<<endl;
    cout<<"================================="<<endl;
    for(int i=0 ; i<num_halls ; i++){
        cout<<"Hall "<<i<<": , ";
        for(int j=0 ; j<num_days ; j++){
            for(int k=0 ; k<num_showtimes ; k++){
                cout<<"Day "<<j<<": "<<shedule[i][j][k]<<" | ";   // printing particular day number ,  hall number , and movie in showtime
            }
        }
        cout<<endl;
    }

    return 0;
}