#include<iostream>

using namespace std;


int main(){
	int n=30;
	//cin>>n;
	
	
	for(int i = 0; i<n; i++){
		for(int j =0; j<n; j++){
			if(i==0 || i==n-1 || j==0 || j==n-1 || i==j || j==n-i-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
/*n = 5
i	01234 ->j
0	*****	i=0 j=n-i-1
1	*  **	i=1 j=n-i-1
2	* * *	i=2 j=n-i-1
3	**  *	i=2 j=n-i-1
4	*****	i=2 j=n-i-1




*/





