#include<iostream>
using namespace std;

int main(){
	int a[4][3] ={{11,12,13},{21,22,23},{31,32,33},{41,42,43}};
	/*
	for(int i = 0; i<4; i++){
		for(int j = 0; j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	
	
	
	string words[1000][2] = {{"Blue","Tsenher"},{"Yellow","Shar"},{"Black","Har"}};
	
	for(int i=0;i<3; i++){
		for(int j = 0; j<2; j++){
			cout<<words[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
