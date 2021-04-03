#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int a,b,max,min,max1;
	cin>>a>>b;
	if(a>b){
		min=b;
		max=a;
	}else{
		min=a;
		max=b;
	}
	max1 = max;
	for(int i=min;i>1;i--){
		if(min%i==0 && max%i==0){
			min = min/i;
			max = max/i;
		}
	}
	cout<<min*max1;
	

	return 0;
}
