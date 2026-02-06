#include<iostream>
using namespace std;

class Demo{
	int value[3];
	
	public:
		void set(){
			for(int i = 0;i < 3;i++){
				cout << "Enter Value for index " << i << endl;
				cin >> value[i];
				
			}
		}
		
		void show(){
			for(int i = 0;i < 3;i++){
				
				cout << "Value at index " << i << " is " << value[i] << endl;
				
			}
		}
		
		
};

int main(){
	Demo d1;
	
	d1.set();
	d1.show();
	
	return 0;
}
