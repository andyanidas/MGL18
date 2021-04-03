#include<iostream>

using namespace std;

int main(){
	int n = 10;
	for(int a=0; a<n; a++){
		for(int b =0; b<n; b++){
			if(a>=n-b-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
			
		cout<<endl;
	}
	
	return 0;
}
