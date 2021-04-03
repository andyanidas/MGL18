#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int n=5;
	//cin>>n;
	
	for(int i=0; i<n*2-1;i++){
		for(int j=0; j<n*2-1;j++){
			if(i==0 || j==0 ||i==n*2-2 || j==n*2-2){
				cout<<n;
			}else{
				cout<<" ";
			}
		}
		
		
		cout<<endl;
	}
	

	return 0;
}
