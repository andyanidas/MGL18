#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int n;
	cin>>n;
	
	for(int i=0; i<n;i++){
		for(int j=0; j<=i ;j++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	

	return 0;
}
/* n=5

5 4 3 2 1
5 4 3 2 
5 4 3 
5 4 
5

*/
