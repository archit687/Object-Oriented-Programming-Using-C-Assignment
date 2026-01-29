#include<iostream>
using namespace std;

//class Book{
//   private:
//   	int price;
//   	string title;
//   	
//   public:
//    int ap(string t,int p){
//    	
//		title = t;
//    	price = p;
//    	
//	};
//	void show(){
//		cout << "Book Name : " << title << endl << "Price : " << price;
//	};	
//};

//class Book{
//   private:
//   	int price;
//   	string title;
//   	
//   public:
//    int ap(){
//    	string bname;
//    	int bprice;
//    	
//		cout << "Enter Book Name " << endl;
//    	cin >> bname;
//    	cout << "Enter Book Price " << endl;
//    	cin >> bprice;
//    	
//		title = bname;
//    	price = bprice;
//    	
//	};
//	
//	void show(){
//		cout << "Book Name : " << title << endl << "Price : " << price;
//	};	
//};

class Student{                      // Class Creation 
   private:                         // Scope Private  
   	int Roll,Aadhar_id;             // Data Members Created 
   	string Name;                    
   	
   	
   public:                          // Scope Public
    int Val(){                      // Member Function
    	string Sname;               // Data Members
    	int RN,AID;                 
    	
		cout << "Enter Student Name " << endl;   // Input
    	cin >> Sname;                            // Taking Student Name as input 
    	cout << "Enter Roll No " << endl;          
    	cin >> RN;                               // Taking Student Roll No as input 
      	cout << "Enter Aadhar Number " << endl;
    	cin >> AID;                              // Taking Student Aadhar id as input
    	
    	Name = Sname;                            // Assigning Value to variable 
		Roll = RN;
    	Aadhar_id = AID;
    	
	};
	
	void show(){                    // Member Function
		cout << "Student Name : " << Name << endl << "ROll No : " << Roll << endl << "Aadhar Number : " << Aadhar_id; // Function For Printing
	};	
};

int main(){
	Student S1;   //Object Instantiation
	
	S1.Val();     // Function Called using Dot(.) Operator
	S1.show();    
	
	
	return 0;     // Main Function Returning 0
  

}
