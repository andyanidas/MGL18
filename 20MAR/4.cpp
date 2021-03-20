#include<iostream>

using namespace std;

int main(){
	int num = 12345,temp,sum=1; //1+2+3+4+5
	temp = num;
	
	
	for(;temp>0;temp/=10){
		sum = sum * temp%10;
	}
	cout<<"Sum = "<<sum;
	return 0;
}
/*
for(int i = 0; i<10; i = i + 1){
	//body
	//body1
	cout<<i<<" ";
}

*/
