#include<iostream>
#include<fstream>

using namespace std;

const int total_seats = 20;

void display_available_tickets(int seats[]){
    bool found = false;
    cout<<"available tickets : \n";

    for(int i=0 ; i<total_seats ; i++){
        if(seats[i]==0){
            cout<<i+1<<" ";
            found = true;
        }
    }
    if(!found){
        cout<<"none!";
    }
    cout<<endl;
}

void display_booked_tickets(int seats[]){
    bool found = false;
    cout<<"booked tickets : \n";
    for(int i=0 ; i<total_seats ; i++){
        if(seats[i]==1){
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
    int seats[total_seats]={0};
    int book_ticket;
    int cancel_ticket;

    do{

    cout<<"\n--------Ticket Reservation System--------\n";
    cout<<"1-Display available Tickets!\n";
    cout<<"2-Book a Ticket!\n";
    cout<<"3-Display booked tickets!\n";
    cout<<"4-Cancel a ticket!\n";
    cout<<"5-Exit the program!\n";

    cout<<"enter your choice : ";
    cin>>choice;

    switch(choice){
        case 1 : 
        display_available_tickets(seats);
        break;

        case 2:
        cout<<"enter the ticket you want to book : ";
        cin>>book_ticket;

        if(book_ticket<1 || book_ticket>20){
            cout<<"Invalid seat number !";
        }
        else if(seats[book_ticket-1]==1){
            cout<<"Ticket already booked!";
        }
        else{
            seats[book_ticket-1]=1;
            cout<<"ticket booked successfully!";
        }
        break;

        case 3:
        display_booked_tickets(seats);
        break;

        case 4:
        cout<<"enter the ticket you want to cancel : ";
        cin>>cancel_ticket;

        if(cancel_ticket<1 || cancel_ticket>20){
            cout<<"invalid ticket number!";
        }
        else if(seats[cancel_ticket-1]==0){
            cout<<"ticket not booked!";
        }
        else{
            seats[cancel_ticket-1]=0;
            cout<<"ticket cancelled successfully!";
        }
        break;
    }

    }while(choice!=5);


    ofstream my_file("tickets.txt" , ios :: app );
    if(!my_file){
        cout<<"error opening a file !";
        return 0;
    }
    for(int i=0 ; i<total_seats ; i++){
        if(seats[i]==1){
            my_file<<seats[i]<<" ";
        }
    }

    my_file.close();


    return 0;
}