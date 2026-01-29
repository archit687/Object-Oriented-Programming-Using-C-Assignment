#include<iostream>
using namespace std;

class Employee{
	private:
		int Emp_id,E_Salary,Join_Year,E_Age;
		string E_Name,E_Designation;
		
	public:
	
	void get_Det(){
		
		
		cout << "Enter Employee Id " << endl;
		cin >> Emp_id;
		
		cout << "Enter Employee Name " << endl;
		cin >> E_Name;
		
		cout << "Enter Employee Joining Year " << endl;
		cin >> Join_Year;
		
		cout << "Enter Emplyee Deignation " << endl;
		cin >> E_Designation;
		
		cout << "Enter Employee Age " << endl;
		cin >> E_Age;
		
		cout << "Enter Employee Salary " << endl;
		cin >> E_Salary;
	}
	
	void showDet(){
		cout << "Employee ID " << Emp_id << endl << "Employee Name " << E_Name << endl << "Employee Joining Year " << Join_Year << endl << "Employee Designation " << E_Designation << endl << "Employee Age " << E_Age << endl << "Employee Salary " << E_Salary << endl; 
	}	
};

int main(){
	Employee E_1;
	
	E_1.get_Det();
	E_1.showDet();
	
	return 0;
}
