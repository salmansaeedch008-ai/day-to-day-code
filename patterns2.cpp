#include<iostream>
using namespace std;

int main(){
	
	
	int n=5;

	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			if(i==1 || j==1 || i==n || j==n){
				cout<<" *";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ; j++){
			if(j==1 || i==n || i==j){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	
	for(int i=n ; i>=1 ; i--){
		for(int j=i ; j>=1 ; j--){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	for(int i=n ; i>=1 ; i--){
		for(int j=i ; j>=1 ; j--){
			if(j==1 || i==n || i==j){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<=n ; j++){
			cout<<"  ";
		}
		for(int k=1 ; k<=i ; k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<=n ; j++){
			cout<<"  ";
		}
		for(int k=1 ; k<=i ; k++){
			if(i==n || k==1 || k==i){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	for(int i=n ; i>=1 ; i--){
		for(int j=n ; j>=i ; j--){
			cout<<"  ";
		}
		for(int k=i ; k>=1 ; k--){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	for(int i=n ; i>=1 ; i--){
		for(int j=n ; j>=i ; j--){
			cout<<"  ";
		}
		for(int k=i ; k>=1 ; k--){
			if(k==1 || i==n || k==i){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<=n ; j++){
			cout<<" ";
		}
		for(int k=1 ; k<=i ; k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<=n ; j++){
			cout<<" ";
		}
		for(int k=1 ; k<=i ; k++){
			if(k==1 || i==n || k==i){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	
	for(int i=n ; i>=1 ; i--){
		for(int j=n ; j>=i ; j--){
			cout<<" ";
		}
		for(int k=i ; k>=1 ; k--){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	for(int i=n ; i>=1 ; i--){
		for(int j=n ; j>=i ; j--){
			cout<<" ";
		}
		for(int k=i ; k>=1 ; k--){
			if(i==n || k==1 || k==i){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	
	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<=n ; j++){
			cout<<" ";
		}
		for(int k=1 ; k<=2*i-1 ; k++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	
	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<=n ; j++){
			cout<<" ";
		}
		for(int k=1 ; k<=2*i-1 ; k++){
			if(i==n || k==1 || k==2*i-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	for(int i=n ; i>=1 ; i--){
		for(int j=n ; j>=i ; j--){
			cout<<" ";
		}
		for(int k=2*i-1 ; k>=1 ; k--){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	
	for(int i=n ; i>=1 ; i--){
		for(int j=n ; j>=i ; j--){
			cout<<" ";
		}
		for(int k=2*i-1 ; k>=1 ; k--){
			if(i==n || k==1 || k==2*i-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}

	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<=n ; j++){
			cout<<" ";
		}
		for(int k=1 ; k<=2*i-1 ; k++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n-1 ; i>=1 ; i--){
		for(int j=n ; j>=i ; j--){
			cout<<" ";
		}
		for(int k=2*i-1 ; k>=1 ; k--){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	

	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<=n ; j++){
			cout<<" ";
		}
		for(int k=1 ; k<=2*i-1 ; k++){
			if(k==1 || k==2*i-1){
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
			if(i==n || k==1 || k==2*i-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	int v=1;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cout<<v<<" ";
			v++;
		}
		cout<<endl;
	}
	
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	v=1;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cout<<v<<" ";
		}
		cout<<endl;
		v++;
	}
	
	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	
	
	char ch = 'a';
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}

	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;

	ch = 'a';
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cout<<ch<<" ";
		}
		cout<<endl;
		ch++;
	}

	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;

	v=1;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ; j++){
			cout<<v<<" ";
			v++;
		}
		cout<<endl;
	}

	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	v=1;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ; j++){
			cout<<v<<" ";
		}
		cout<<endl;
		v++;
	}

	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	
	ch='a';
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ; j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}


	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	
	ch='a';
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ; j++){
			cout<<ch<<" ";
		}
		cout<<endl;
		ch++;
	}

	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	v=1;
	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<=n ; j++){
			cout<<" ";
		}
		for(int k=1 ; k<=2*i-1 ; k++){
			cout<<v;
			v++;
		}
		cout<<endl;
	}



	cout<<endl;
	cout<<"////////////////////////////////////////"<<endl<<endl;
	
	v=1;
	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<=n ; j++){
			cout<<" ";
		}
		for(int k=1 ; k<=2*i-1 ; k++){
			cout<<v;
		}
		cout<<endl;
		v++;
	}

	return 0;
}
