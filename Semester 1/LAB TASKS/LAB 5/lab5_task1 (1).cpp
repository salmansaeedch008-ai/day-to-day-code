#include<iostream> 
using namespace std;
int main(){
    char patrol;
    int sp,num,spotted,total,spottedmost;
    do{
        cout<<"start anew patrol?(y/n)"<<endl;
        cin>>patrol;
        cout<<"how many species were sighted today?";
        cin>>sp;
        string name,most;
        num = 1;

        if(patrol == 'y'){
            while(num<=sp){

                cout<<"\nenter the name of#"<<num<<"specie:";
                cin>>name;

                cout<<"\nhow many of"<<name<<"were spotted:";
                cin>>spotted;
                num++;
                total = total + spotted;
                if(spotted > spottedmost){
                    spottedmost = spotted;
                    most = name;
                }

            }

            cout<<"-----patrol summary-----\n\n";
            cout<<"total animals spotted:"<<total;
            cout<<"\ntop species today:"<<most;



        cout<<"\nstart a new patrol?(y/n)";
        cin>>patrol;
        }

    }while(patrol == 'y');

    return 0;
}