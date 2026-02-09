#include<iostream>
using namespace std;

class student{
	public:
	static int count;
	void inc(){
		count++;
	}
};

int student::count = 0;

int main(){
	student s1,s2;
	
	s1.inc();
	cout << "First Increment " << student::count << endl; 
	s1.inc();
	cout << "Second Increment " << student::count << endl;
	
	for(int i = 0;i<= 10;i++){
		
		s1.inc();	
		cout << student::count << endl; 	
	}
	
	cout << student::count << endl;
	return 0;
}

