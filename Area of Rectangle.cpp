#include<iostream>
using namespace std;

class AOR{
	private:
		int Length,width;
		
	public:
	void getdet(int L,int W){
		Length = L;
		width = W;
	}	
	
	int Show(){
		int sol;
		
		sol = Length * width;
		
		return sol;
	}
};
int main(){
	AOR lb1;
	int Length,Width,sol;
	
	cout << "Enter Length " << endl;
	cin >> Length;
	
	cout << "Enter Width " << endl;
	cin >> Width;
	
	lb1.getdet(Length,Width);
	sol = lb1.Show();
	
	cout << "Area of Rectangle " << sol << endl;
	
	
	return 0;
	
	
}
