#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "//////////////////////////////////////////";
    cout << endl;

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "//////////////////////////////////////////";
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == n || i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "//////////////////////////////////////////";
    cout << endl;

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            if (j == 1 || i == n || i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "//////////////////////////////////////////";
    cout << endl;

    for(int i=1 ; i<=n ; i++){
        for(int j=i ; j<=n ; j++){
            cout<<" ";
        }
        for(int k=1 ; k<=2*i-1 ; k++){
            cout<<"*";
        }
        cout<<endl;
    }


    cout << "//////////////////////////////////////////";
    cout << endl;

    for(int i=n ; i>=1 ; i--){
        for(int j=n ; j>=i ; j--){
            cout<<" ";
        }
        for(int k=2*i-1 ; k>=1 ; k--){
            cout<<"*";
        }
        cout<<endl;
    }

    cout << "//////////////////////////////////////////";
    cout << endl;

    for(int i=1 ; i<=n ; i++){
        for(int j=i ; j<=n ; j++){
            cout<<" ";
        }
        for(int k=1 ; k<=2*i-1 ; k++){
            if(k==1 || k==2*i-1  ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n-1 ; i>=1 ; i--){
        for(int j=n ; j>=i ; j--){
            cout<<" ";
        }
        for(int k=2*i-1 ; k>=1 ; k--){
            if(k==1 || k==2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }

    return 0;
}