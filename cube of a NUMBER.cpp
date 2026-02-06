#include<iostream>
using namespace std;

class Math{
	public:
		inline int cube(int x){
		    return x*x*x;	
		}
};

int main(){
	Math M1;
	int val;
	
	cout << "Enter A Value" << endl;
	cin >> val;
	
	cout << "Cube of " << val << " is "<<M1.cube(val) << endl;
	
	
	return 0;
}

