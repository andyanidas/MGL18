#include<iostream>

using namespace std;
//prototype
int maxOfThree(int,int,int);


int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"MAX num is "<<maxOfThree(a,b,c);
	
	
	return 0;
}


int maxOfThree(int x,int y,int z){
	if(x>y && x>z){
		return x;
	}else if(y>x && y>z){
		return y;
	}else{
		return z;
	}
}



