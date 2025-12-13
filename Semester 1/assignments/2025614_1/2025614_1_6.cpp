#include <iostream>
using namespace std;

int main() 
{
    float basicSalary;
    cout<<"Enter Basic Salary: ";
    cin>>basicSalary;

    // Old Allowances
    float houseAllowance_old = 0.30 * basicSalary;
    float transportAllowance_old = 0.10 * basicSalary;
    float medicalAllowance_old = 0.25 * basicSalary;
    float gross_old = basicSalary + houseAllowance_old + transportAllowance_old + medicalAllowance_old;

    // Display old salary details
    cout<<"Old Salary Details"<<endl;
    cout<<"House Allowance (30%) = "<<houseAllowance_old<<endl;
    cout<<"Transport Allowance (10%) = "<<transportAllowance_old<<endl;
    cout<<"Medical Allowance (25%) = "<<medicalAllowance_old<<endl;
    cout<<"Total/Gross Salary = "<<gross_old<<endl;

    // New Allowances
    float houseAllowance_new = 0.40 * basicSalary;
    float transportAllowance_new = 0.15 * basicSalary;
    float medicalAllowance_new = 0.35 * basicSalary;
    float gross_new = basicSalary + houseAllowance_new + transportAllowance_new + medicalAllowance_new;

    // Display new salary details
    cout<<" New Salary Details"<<endl;
    cout<<"House Allowance (40%) = "<<houseAllowance_new<<endl;
    cout<<"Transport Allowance (15%) = "<<transportAllowance_new<<endl;
    cout<<"Medical Allowance (35%) = "<<medicalAllowance_new<<endl;
    cout<<"Total/Gross Salary = "<<gross_new<<endl;

    // Difference
    float difference = gross_new - gross_old;
    cout<<"Difference between New and Old Gross Salary = "<<difference<<endl;

    return 0;
}
