#include<iostream>

using namespace std;
//prototype
double circleArea(double);
double circleDia(double);
double circlePer(double);

int main(){
	double r,area,per,dia;
	cout<<"Enter radius: ";
	cin>>r;
	area = circleArea(r);
	per = circlePer(r);
	dia = circleDia(r);
	cout<<"Area of circle with "<<r<<" radius is "<<area;
	
	
	return 0;
}




double circleArea(double r){
	return r*r*3.14;
}

double circleDia(double r){
	return r*2;
}
double circlePer(double r){
	return 2*3.14*r;
}





