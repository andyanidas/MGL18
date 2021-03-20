#include<iostream>

using namespace std;

int main(){
	int num,count=0,temp,tenPow=1;
	//cin>>num; //723456 /100000
	num = 72345;
	//counting digits in given number
/*	for(int i = 1; i<num ; i*=10){
		count++;
	}*/
	//another method for counting digits in number
	temp = num;
	for(;temp>0; temp/=10){
		count++;
	}
	
	for(int i=1; i<count; i++){
		tenPow = tenPow*10; //tenPow*=10;
	}
	cout<<num/tenPow;
	
	return 0;
}
