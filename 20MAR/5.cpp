#include<iostream>

using namespace std;
/*
hereglegchiin ogson toonii ehnii bolon etssiin 
tsiperiin bairiig soli
*/
int main(){
	//123456 -> 623451
	int num = 123456;
	int fd,ld,temp,count=0,tenPow=1;
	ld = num%10;
	temp = num;
	for(;temp>10;temp/=10){
		count++;
	}
	//count = 5
	fd = temp;
	for(int i=0;i<count;i++){
		tenPow*=10;
	}
	//tenPow = 100000
	temp = num; //temp = 123456
	temp = temp%tenPow; //123456%100000 = 23456
	temp = temp/10; 	//temp = 2345
	temp = temp*10 + fd;//temp = 23451
	temp = temp + ld*tenPow; //temp = 623451
	//623451 
	cout<<temp;
	
	return 0;
}
