#include<iostream>
using namespace std;
int main(){

	for(int i = 0; i<24; ++i){
		char symbols[2] = {'*','-'};
		
		for(int j = 4; j<abs(12-i); ++j){//right spacing
			cout<<' ';
		}
		
		cout<<symbols[i%2]<<' ';
		if(i>1&&i<22)
			cout<<symbols[1-i%2];
			
		if(i<8||i>15){	
			for(int j=0; j<18-abs(2*(i-11)-1);++j){
				cout<<' ';
			}
		}else{
			for(int j = 0; j<abs(12-i); ++j)//right spacing
				cout<<'*';
			
			for(int j = 3; j<13-2*abs(12-i); ++j)//right spacing
				cout<<-abs(11-i)+7-abs(7-j)+3- 2;
			
			for(int j = abs(12-i); j>0; --j)//right spacing
				cout<<'*';
			}
		
		if(i>2&&i<21){
			cout<<symbols[(i+1)%2]<<' '<<symbols[i%2];
		}
		
		switch(i){
			case 1:
				cout<<'-';
	
				break;
			case 2:
				cout<<" *";
				break;
			case 22:
				cout<<"-";
	
				break;
			case 21:
				cout<<" *";
				break;
		}
		
		cout<<endl;
}
	return 0;
}