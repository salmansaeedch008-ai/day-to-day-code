#include <iostream>
using namespace std;

void sellitem(int stock , int quantity){
    stock = stock - quantity;
}
void restockitem(int stock , int quantity){
    stock = stock + quantity;
}
void showstock(int stock){
    cout<<"current stock="<<stock;
}





int main(){
    int stock , sold , restock;
    cout<<"initial stock=";
    cin>>stock;

    cout<<"sold items=";
    cin>>restock;

    cout<<"restock items=";
    cin>>restock;

    sellitem(stock , sold);
    restockitem(stock , restock);
    showstock(stock);



    return 0;
}