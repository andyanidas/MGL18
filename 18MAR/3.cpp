#include<iostream>

using namespace std;

int main(){
	string name;
	cout<<"Enter your name: ";
	
	
	
	for(cin>>name ; name != "bold" ; cin>>name){
		cout<<"\n---------------------------\n";
		if(name=="1"){
			break;
		}
		
		if(name=="2"){
			continue;
		}
		cout<<"Try again!"<<endl;
		cout<<"Enter your name: ";
	}
	
	cout<<"Hello Bold";
	
	
	return 0;
}
