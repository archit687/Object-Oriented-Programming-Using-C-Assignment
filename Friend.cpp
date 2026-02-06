#include<iostream>
using namespace std;

class Box{
	int len;
	
	public:
		void det(int length){
			len  = length;
		}
		
		friend void show(Box);
};

void show(Box B){
	cout << "Length = " << B.len << endl;
}

int main(){
	Box B1;
	int length;
	cout << "Enter Length" <<  endl;
	cin >> length;
	
	B1.det(length);
	show(B1);
	
	
	return 0;
	
}
