#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<"///////////////////////////////////////////";
	cout<<endl;
	
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			if(i==1 || j==1 || i==n || j==n){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	cout<<"///////////////////////////////////////////";
	cout<<endl;
	
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<"///////////////////////////////////////////";
	cout<<endl;
	
	for(int i=n ; i>=1 ; i--){
		for(int j=i ; j>=1 ; j--){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<"///////////////////////////////////////////";
	cout<<endl;
	
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
	
	cout<<"///////////////////////////////////////////";
	cout<<endl;
	
	for(int i=n ; i>=1 ; i--){
		for(int j=i ; j>=1 ; j--){
			if(i==n || j==1 || j==i){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	
	cout<<"///////////////////////////////////////////";
	cout<<endl;
	

    for(int i=1 ; i<=n ; i++){
        for(int j=n ; j>=i ; j--){
            cout<<"  ";
        }
        for(int k=1 ; k<=i ; k++){
            cout<<" *";
        }
        cout<<endl;
    }

	cout<<"///////////////////////////////////////////";
	cout<<endl;

	for(int i=n ; i>=1 ; i--){
		for(int j=i ; j<=n ; j++){
			cout<<"  ";
		}
		for(int k=i ; k>=1 ; k--){
			cout<<" *";
		}
		cout<<endl;
	}
	
	
	cout<<"///////////////////////////////////////////";
	cout<<endl;

	for(int i=1; i<=n; i++){
    	for(int j=n; j>=i; j--){
        	cout<<"  ";
    	}
    	for(int k=1; k<=i; k++){
        	if(i==n || k==1 || k==i){
            cout<<" *";
        	}
        	else{
            cout<<"  ";
        	}
    	}
    	cout << endl;
	}

	cout<<"///////////////////////////////////////////";
	cout<<endl;
	
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			if(i==1 || j==n ||i==j){
				cout<<" *";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	cout<<"//////////////////////////////////////////";
	cout<<endl;
	
    for(int i=1 ; i<=n ; i++){
        for(int j=i ; j<=n ; j++){
            cout<<" ";
        }
        for(int k=1 ; k<=i ; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
	cout<<"//////////////////////////////////////////";
	cout<<endl;
	
    for(int i=1 ; i<=n ; i++){
        for(int j=i ; j<=n ; j++){
            cout<<" ";
        }
        for(int k=1 ; k<=i ; k++){
        	if(i==n || k==1 ||k==i){
        		cout<<"* ";
			}
			else{
				cout<<"  ";
			}
        }
        cout<<endl;
    }
    
    cout<<"//////////////////////////////////////////";
	cout<<endl;
    
    for(int i=n ; i>=1 ; i--){
        for(int j=n ; j>=i ; j--){
            cout<<" ";
        }
        for(int k=i ; k>=1 ; k--){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<"/////////////////////////////////////////";
    cout<<endl;
    
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
    
    cout<<"/////////////////////////////////////////";
    cout<<endl;
    
    for(int i=1 ; i<=n ; i++){
        for(int j=i ; j<=n ; j++){
            cout<<" ";
        }
        for(int k=1 ; k<=i ; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n ; i>=1 ; i--){
        for(int j=n ; j>=i ; j--){
            cout<<" ";
        }
        for(int k=i-1 ; k>=1 ; k--){
            cout<<" *";
        }
        cout<<endl;
    }
    
    
    cout<<"/////////////////////////////////////////";
    cout<<endl;
    
    for(int i=1 ; i<=n ; i++){
        for(int j=i ; j<=n ; j++){
            cout<<" ";
        }
        for(int k=1 ; k<=i ; k++){
        	if(k==1 ||k==i){
        		cout<<"* ";
			}
			else{
				cout<<"  ";
			}
        }
        cout<<endl;
    }
    
    for(int i=n ; i>=1 ; i--){
        for(int j=n ; j>=i ; j--){
            cout<<" ";
        }
        for(int k=i-1 ; k>=1 ; k--){
        	if(k==1 || k==i-1){
        		cout<<" *";
			}
			else{
				cout<<"  ";	
			}
        }
        cout<<endl;
    }
    
    
    
	return 0;
}
