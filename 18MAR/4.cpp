#include<iostream>

using namespace std;

int main(){
	int num = 88;
	int count = 0;
	
	for(int guess = -1 ; guess != num;){
		cout<<"1-100 toog taanuu: ";
		cin>>guess;
		if(guess>num){
			cout<<"het ih baina!";
		}else if(guess<num){
			cout<<" het baga baina!\n";
		}
		count++;
	}
	
	cout<<"Bayar hurgey taa "<<num<<" gesen toog "<<count<<" davtamjaar amjilttai taalaa";
	
	return 0;
}
