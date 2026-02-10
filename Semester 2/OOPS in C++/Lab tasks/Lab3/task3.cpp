#include<iostream>

using namespace std;

int main(){
    int n = 3;
    int max = n;
    char choice;
    float updated_average_salary = 0.0;   //initialied with zero

    int employee_record[n];    //static array of size 3
    for(int i=0 ; i<max ; i++){
        cout<<"Enter salary of "<<i+1<<" employee : ";
        cin>>employee_record[i];
    }
    for(int i=0 ; i<max ; i++){
        updated_average_salary += employee_record[i];      //adding 3 salaries
    }
    cout<<endl;

    do{
        cout<<"Do you want to enter more record of Employee (press Y for yess and N for no) : ";
        cin>>choice;

        if(choice == 'y' || choice == 'Y'){
            max = max+1;    //increasing size 

            int *employee_array = new int[max];     //new dynamic array of larger size
            
            for(int i=0 ; i<n ; i++){
                employee_array[i] = employee_record[i];      //copying previous array into new array
            }

            cout<<"Enter the new salary you want to add : ";
            cin>>employee_array[n];
            updated_average_salary += employee_array[n];     //adding the newly added salary to previos added salaries
            n++;

        }
        else{
            break;
        }
    }while(choice == 'y' || choice == 'Y');

    updated_average_salary = updated_average_salary / max;      //computing the average updated salary 
    cout<<"Average updated salary : "<<updated_average_salary<<endl;

    cout << "\n2025614 - Salman Saeed\n";

    return 0;
}

