#include<iostream>
using namespace std;

int main(){
	int r , c;
	cout<<"how many number of rows you want in matrix : ";
	cin>>r;
	cout<<"how many number of coloumns you want in matrix : ";
	cin>>c;
	
	
	int arr[r][c];
	int size_r = r;
	int size_c = c;
	
	
	cout<<"enter numbers for 2d array : ";
	for(int i=0 ; i<size_r ; i++){
		for(int j=0 ; j<size_c ; j++){
			cin>>arr[i][j];
		}
	}
	
	
	cout<<"your 2d array with indexes : "<<endl;
	for(int i=0 ; i<size_r ; i++){
		for(int j=0 ; j<size_c ; j++){
			cout<<"arr["<<i<<"]["<<j<<"] ="<<arr[i][j]<<"    ";
		}
		cout<<endl;
	}	
	cout<<endl;
	
	
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i=0 ; i<size_r ; i++){
		for(int j=0 ; j<size_c ; j++){
			if(max<arr[i][j]){
				max = arr[i][j];
			}
			if(min>arr[i][j]){
				min = arr[i][j];
			}
		}
	}
	cout<<"maximum number in 2d array : "<<max<<endl;
	cout<<"minimum number in 2d array : "<<min<<endl;
	cout<<endl;
	
	int sum_diagonal;
	if(size_r == size_c){
	for(int i=0 ; i<size_r ; i++){
		for(int j=0 ; j<size_c ; j++){
			if(i==j){
				sum_diagonal += arr[i][j];
			}
		}
	}
	cout<<"sum of diagonal numbers of matrix is : "<<sum_diagonal;
	}
	else{
		cout<<"sum of diagonal is only possible when number of rows and coloumns are equal";
	}		
	
	
	return 0;
}
