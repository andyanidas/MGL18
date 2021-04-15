#include<iostream>

using namespace std;
int choice();
void pat4(int);
void pat6(int);
void pat8(int);
void pat10(int);

int main(){
	int ch=0;
	while(ch!=11){
		int SIZE;
		ch = choice();
		switch(ch){ 
			case 4: //if(ch==4){}
				cout<<"Enter size: ";
				cin>>SIZE;
				pat4(SIZE);
				break;
			case 6: //if(ch==6){}
				cout<<"Enter size: ";
				cin>>SIZE;
				pat6(SIZE);
				break;
			case 8:
				cout<<"Enter size: ";
				cin>>SIZE;
				pat8(SIZE);
				break;
			case 10:
				cout<<"Enter size: ";
				cin>>SIZE;
				pat10(SIZE);
				break;
			case 11:
				cout<<"Thank you for using our program";
				break;
			default:
				cout<<"error!";
				break;
		}
	}
	
	
	return 0;
}

int choice(){
	int c = -1;
	while(c<1 || c>11){
		cout<<"Enter pattern number that you want to print (1-10): ";
		cin>>c;
	}
	return c;
}
void pat4(int s){
	for(int i=0; i<s; i++){
		for(int j = 0; j<s; j++){
			if(i==0 || i==s-1 || j==0 || j==s-1){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
}
void pat6(int s){
	for(int i = 0; i<s; i++){
		for(int j=0; j<s; j++){
			if((i+j)%2==0){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	
}
void pat8(int s){
	for(int i = 0; i<s; i++){
		for(int j =0; j<s; j++){
			if(i==j || i==s-j-1){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
}
void pat10(int s){
	for(int i = 0; i<s; i++){
		for(int j =0; j<s; j++){
			cout<<i+1;
		}
		cout<<endl;
	}
}





