#include<iostream>
using namespace std;

class Customer{
	private:
		int C_id,C_quantity,C_phone,C_Pamount;
		string C_name;
	
	public:
	  
	    void getdet(int id,string name,int quantity,int phone,int amount){
	    	C_id = id;
	    	C_name = name;
	    	C_phone = phone;
	    	C_quantity = quantity;
	    	C_Pamount = amount;
	    	
		}
		
		void show(){
			cout << "Customer id -> " << C_id << endl;
			cout << "Customer Name -> " << C_name << endl;
			cout << "Customer Phone Number -> " << C_phone << endl;
			cout << "Customer Quantity Purchased -> " << C_quantity << endl;
			cout << "Customer Purchased Amount -> " << C_Pamount << endl;
		}
		
			
};

int main(){
	Customer c1;
	int id,phone,quantity,amount;
	string name;
	
	cout << "Enter Customer Id " << endl;
		cin >> id;
		
		cout << "Enter Customer Name " << endl;
		cin >> name;
		
		cout << "Enter Customer Phone Number " << endl;
		cin >> phone;
		
		cout << "Enter Customer Quantity Purchased " << endl;
		cin >> quantity;
		
		cout << "Enter Customer Purchased Amount " << endl;
		cin >> amount;
	
	c1.getdet(id,name,quantity,phone,amount);
	c1.show();
	
	
	return 0;	
		
	
}
