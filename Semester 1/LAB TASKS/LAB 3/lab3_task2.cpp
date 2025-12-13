#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter your marks:";
    cin>>marks;// input marks
    switch (marks)
    {
        case  '100' :
        cout<<"Grade A";//Grade A
        break;
        case '90' :
        cout<<"Grade A";
        break;
        case '89' :
        cout<<"Grade B";//Grade B
        break;
        case '80' :
        cout<<"Grade B";
        break;
        case '79' :
        cout<<"Grade C";//Grade C
        break;
        case '70' :
        cout<<"Grade C";
        break;
        case '69' :
        cout<<"Grade D";//Grade D
        break;
        case '60' :
        cout<<"Grade D";
        break;
        default:
        cout<<"you are fail";// for fail
        break;


    }



    return 0;
}
