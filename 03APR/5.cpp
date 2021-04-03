#include<iostream>
using namespace std;
//fucntion prototype

string askName();



int main(){
	string name;
	name = askName();
	cout<<"Hello "<<name;
	
	return 0;
}

string askName(){
	string name;
	cout<<"Enter your name: ";
	cin>>name;
	return name;
}


