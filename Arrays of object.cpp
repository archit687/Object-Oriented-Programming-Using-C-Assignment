#include<iostream>
using namespace std;

class Demo{
	int value;
	
	public:
		void set(){

        cout << "Enter Value" << endl;
        cin >> value;

		}
		
		void show(){
			
         cout << "Value for N -->" << value << endl; 
		}
		
		
};

int main(){
	Demo D[3];
	
	for(int i = 0;i < 3;i++){
		
		cout << "Enter Values for Demo " << i << endl;
		D[i].set();
		
		
		
	}
	for(int i = 0;i < 3;i++){
		
		D[i].show();
		
	}
	
	
	return 0;
}
