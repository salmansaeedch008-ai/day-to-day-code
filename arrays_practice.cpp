#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter size of array : ";
	cin>>n;
	int arr[n];
	
	for(int i=0 ; i<n ; i++){
		cout<<"enter "<<i+1<<" number for array : ";
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"original array : "<<endl;
	for(int i=0 ; i<n ; i++){                        //dispaly an array
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int max = INT_MIN;
	int index;
	for(int i=0 ; i<n ; i++){
		if (max<arr[i]){                          //find maximum
			max = arr[i];
			index = i;
		}
	}
	
	cout<<endl;
	cout<<"maximum number : "<<max<<endl<<endl;
	cout<<"maximum founded at index : "<<index<<endl<<endl;
	
	int min = INT_MAX;
	for(int i=0 ; i<n ; i++){
		if (min>arr[i]){                                    //find minimum
			min = arr[i];
			index = i;
		}
	}
	
	cout<<"minimum number : "<<min<<endl<<endl;
	cout<<"minimum founded at index : "<<index<<endl<<endl;
	
	
	int start = 0;
	int end = n-1;
	
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	
	cout<<"reversed array : "<<endl;
	for(int i=0 ; i<n ; i++){
		cout<<arr[i]<<" ";                                      //reverse array
	}
	
	cout<<endl;
	
	
	
	return 0;
}