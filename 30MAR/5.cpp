#include<iostream>

using namespace std;

int main(){
	int n = 10;
	for(int a=0; a<n; a++){

		for(int b =0; b<=a; b++){
			cout<<(a+b+1)%2;
		}
			
		cout<<endl;
	}

	
	return 0;
}
