#include<iostream>
using namespace std;

int fib(int n){
	if(n<2){
		return n;
	}
	else{
		return fib(n-1) + fib(n-2);
	}
}
///////////////////////////////////////
int factorial(int n){
	if(n<2){
		return 1;
	}
	else{
		return n*(n-1);
	}
}
//////////////////////////////////////
int sum_of_digits(int n){
	if(n==0){
		return 0;
	}
	else{
		return (n%10+sum_of_digits(n/10));
	}
}
/////////////////////////////////////////
int sum_of_n_numbers(int n){
	if(n==1){
		return 1;
	}
	else{
		return (n + sum_of_n_numbers(n-1));
	}
}


int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n;
	
	cout<<"fibonacci of n terms is : ";
	for(int i=0 ; i<=n ; i++){
		cout<<fib(i)<<" ";
	}
	//////////////////////////////////////
	cout<<endl;
	cout<<"factorial of "<<n<<" is : "<<factorial(n);
	cout<<endl;
	//////////////////////////////////////
	int num;
	cout<<"enter a number for the sum of digits : ";
	cin>>num;
	cout<<"sum of digits : "<<sum_of_digits(num);
	cout<<endl;
	///////////////////////////////////////
	cout<<"sum of n natural numbers : "<<sum_of_n_numbers(n);
	
	return 0;
}
