#include <iostream>
using namespace std;
void updateRound(int p1_points , int p2_points , int & p1_total , int & p2_total , int & p1_roundwins , int & p2_roundwins){
    p1_total = p1_total + p1_points;   // adding round points to palyers total points.
    p2_total = p2_total + p2_points;

    if(p1_points>p2_points){                 // checking who won the round.
        p1_roundwins = p1_roundwins + 1;
    }
    else if(p2_points>p1_points){
        p2_roundwins = p2_roundwins + 1;
    }
    else{
        cout<<"Round is a tie"<<endl;
    }
}

int main(){

    int p1_total = 0 , p2_total = 0 , p1_round_wins = 0, p2_round_wins =0 ;

    for(int round=1 ; round<=5 ; round++){
        int p1_points , p2_points;
        cout<<"Round "<<round<<endl;
        do{
        cout<<"enter player 1 points = ";
        cin>>p1_points;
        if(p1_points<0){
            cout<<"invalid input , please again ";
        }
        }while(p1_points<0);
        do{
        cout<<"enter player 2 points = ";
        cin>>p2_points;
        if(p2_points<0){
            cout<<"invalid input please again ";
        }
        }while(p2_points<0);

        updateRound(p1_points , p2_points , p1_total , p2_total , p1_round_wins , p2_round_wins);
        cout<<endl;
    }

    cout<<"----Final scores----"<<endl;
    cout<<"player 1 total points = "<<p1_total<<endl;
    cout<<"player 1 rounds won = "<<p1_round_wins<<endl;
    cout<<"player 2 total points = "<<p2_total<<endl;
    cout<<"player 2 rounds won = "<<p2_round_wins<<endl;

    return 0;
}