#include<iostream>

using namespace std;

int main(){
	int n = 10;
	for(int a=0; a<n; a++){
		for(int b =0; b<n-a; b++){
			cout<<" ";
		}
		for(int b =0; b<a*2+1; b++){
			cout<<"*";
		}
			
		cout<<endl;
	}
	
	for(int a=0; a<n+1; a++){
		for(int b =0; b<a; b++){
			cout<<" ";
		}
		
		
		for(int b =0; b<n*2-a*2+1; b++){
			cout<<"*";
		}
			
		cout<<endl;
	}
	
	return 0;
}
