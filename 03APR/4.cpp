#include<iostream>
//fucntion prototype
int findAge(int);

using namespace std;





int main(){
	int year,age;
	cout<<"Enter Birth Year: ";
	cin>>year;
	age = findAge(year);
	cout<<"Your age is "<<age;
	
	
	return 0;
}

int findAge(int asd){
	int nas;
	nas = 2021-asd;
	return nas;
}


