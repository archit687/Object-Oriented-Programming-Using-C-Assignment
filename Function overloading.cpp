#include<iostream>
using namespace std;

int add(int a,int b){
	return a+b;
}

int add(int a,int b,int c){
	return a+b+c;
}

float add(float a,float b){
	return a+b;
}

int main(){
	int a = 10,b = 20,c = 30;
	float d = 10.5,e = 11.3;
	
	cout << add(a,b) << endl;
	cout << add(a,b,c) << endl;
	cout << add(d,e) << endl;
	
	return 0;
}
