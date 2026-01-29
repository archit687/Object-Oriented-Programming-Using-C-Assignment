#include<iostream>
using namespace std;

class factorial{
	private:
		int f = 1,i;
	
	public:
	   int fact(int fa){
//	       f = fa;
	       if(f < 0){
	       	cout << "Error " << endl;
		   }
		   else{
		   	for(i = 1;i <= fa;i++){
		   		
		   		f = f * i;
		   		
			   }
		   }
		   
		   return f;
	   }	
};

int main(){
	factorial f1;
	int num,sol;
	
	cout << "Factorial Calculator " << endl;
	
	cout << "Enter Number " << endl;
	cin >> num;
	
	sol = f1.fact(num);
	
	cout << "Factorial of " << num << "is " << sol << endl;
	
	return 0;
	
	
}
