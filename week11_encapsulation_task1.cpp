#include <iostream>
using namespace std;
class Employee{
	private:
		string employee_name;
		int employee_id;
		double basic_salary;
		
		public: 
		void setEmployeeDetails() { 
		cout<<"Enter employee name:"<<endl; 
		cin>>employee_name;
		 cout<<"Enter employee ID:"<<endl; 
		 cin>>employee_id; 
		 cout<<"Enter basic salary:"<<endl; 
		cin>>basic_salary;
		 }
		 double calculateSalary() {
		  return basic_salary + (0.10 * basic_salary);
		   } 
		   void displayEmployeeDetails() { 
		   cout<<"--- Employee Details ---:"<<endl; 
		   cout<<"Employee Name:"<<employee_name<<endl; 
		   cout<<"Employee_id:"<<employee_id<<endl; 
		   cout<<"Basic Salary:"<<basic_salary<<endl; 
		   cout<<"Net Salary:"<< calculateSalary() << endl; }
		    };
			 int main() {  
			 Employee emp;  
			 emp.setEmployeeDetails(); 
			 emp.displayEmployeeDetails(); 
			 return 0;
		  }
		
		
