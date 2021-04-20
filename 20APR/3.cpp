#include<iostream>

using namespace std;

int main(){
	int student[20] = {12345,2333,1412341,133333,12223};
	
	//cout<<student[3];
	
	string studentName[10] = {"boldo","bataa","tsetsgee","dulmaa","dolgor","dorj"};
	
	for(int i = 0; i<10; i++){
		cout<<studentName[i]<<" ";
	}
	string name10B[30];
	double grade10B[30];
	int too;
	cout<<"Tanai angi heden suragchtai ve?";
	cin>>too;
	
	for(){
		cout<<i<<". dahi suragchiin ner :";
		cin>>name10B[i];
		cout<<i<<". dahi suragchiin dun :";
		cin>>grade10B[i];
	}
	
	for(){
		cout<<"Tanai angiin niit suragchdiin burtgel"<<endl;
		cout<<"---------------------------------------"<<endl;
	}
	
	/*
	-1 -10
100
5
61
-2
-23
8
-90
51
	iim toonuudtai array uuseg uusegsen arrayiin zovhon sorog toonuudiig 
	heveleg loop zohio!
	*/
	
	/*
	usegnii tsugluulga (array) char ch[100] = {'H','e','l','l','o'}; geh met
	oguulber oruulaad ug oruulsan oguulberee hevlen gargaj ir
	jishee n output: Hello
	*/
	
	return 0;
}
