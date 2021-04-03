#include<iostream>
void menuPrint();


using namespace std;

int main(){
	string name;
	int table;
	int choice;
	char answer;
	
	
	while(1){
		cout<<"New customer arrived (y/n)? :";
		cin>>answer;
		if(answer == 'y'){
			menuPrint();
			cin>>choice;
		}else if(answer=='n'){
			cout<<"Okey lets wait a little."<<endl;
		}else{
			break;
		}
	}
	
	
	return 0;
}

void menuPrint(){
	cout<<"Welcome to our restaurant!"<<endl;
	cout<<"Menu: "<<endl;
	cout<<"1.Tsuivan "<<endl;
	cout<<"2.Budaa"<<endl;
	cout<<"3.Shol"<<endl;
	cout<<"4.Havirga"<<endl;
}
