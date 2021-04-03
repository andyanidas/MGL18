#include<iostream>

using namespace std;


int main(){
	int n=9;
	//cin>>n;
	
	
	for(int i = 0; i<n; i++){
		for(int j =n-1; j>i ; j--){
			cout<<j+1;
		}
		for(int j =0; j<n; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
/*n = 5
i	01234 ->j
0	1234*****	4Space j
1	123*****	3Space
2	12*****		2Space
3	1*****		1Space
4	*****		0Space

*/





