#include<iostream>
//fucntion prototype
int sum(int, int);

using namespace std;





int main(){
	int a,b,niilber;
	cout<<"Enter 2 integer: ";
	cin>>a>>b;
	niilber = sum(a,b);
	cout<<niilber;
	return 0;
}

//void -> hooson buyu yuuch butsaahgui
/*
function ii omno Return Type bairlana haaltan dotor
input type bairlana
*/
int sum(int x, int y){
	int k;
	k = x + y;
	return k;
}


