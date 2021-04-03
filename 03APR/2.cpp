#include<iostream>
//fucntion prototype
void FunctionA();
void FunctionB();
void FunctionC();
void FunctionD();

using namespace std;





int main(){
	FunctionB();
	return 0;
}

//void -> hooson buyu yuuch butsaahgui
/*
function ii omno Return Type bairlana haaltan dotor
input type bairlana
*/
void FunctionA(){
	cout<<"This is Function A"<<endl;
	FunctionD();
}
void FunctionB(){
	cout<<"This is Function B"<<endl;
	FunctionA();
}
void FunctionC(){
	cout<<"This is Function C"<<endl;
}
void FunctionD(){
	cout<<"This is Function D"<<endl;
}
