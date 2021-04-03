#include<iostream>

using namespace std;

int main(){
	int n = 10;
	for(int a=0; a<n; a++){
		for(int b =0; b<n-a-1; b++){
			cout<<" ";
		}
		for(int b=0; b<=a; b++){
			cout<<"*";
		}	
		cout<<endl;
	}
	
	return 0;
}
