#include<iostream>

using namespace std;
//prototype
bool isPrime(int);


int main(){
	int num;
	cin>>num;
	if(isPrime(num)){
		cout<<"Yes it is a prime number";
	}else{
		cout<<"No it is not a prime number";
	}


	return 0;
}

bool isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}




