#include <iostream>
using namespace std;
string palindrom(int);

int main() {
	int num;
	cin>>num;
	
	cout<<palindrom(num);


	return 0;
}
string palindrom(int n){
	int rev=0;
	int n1=n;//123456
	
	for(;n1>0;n1/=10){
		rev = rev*10+n1%10;
	}
	
	if(rev==n){
		return "YES";
	}else{
		return "NO";
	}
}




