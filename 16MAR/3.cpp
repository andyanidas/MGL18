#include<iostream>

using namespace std;

int main(){
	int x=10,y=10,z;
	cout<<"Enter 3 integer : ";
	cin>>x>>y>>z; //15 55
	
	if(x>y){
		//true body part
		if(x>z){
			cout<<"Max : "<<x;
		}else{
			cout<<"Max : "<<z;
		}
	}else{
		//false body part
		if(y>z){
			cout<<"Max : "<<y;
		}else{
			cout<<"Max : "<<z;
		}
	}
	
	
	
	return 0;
}
