// Jyothi Jeyakumar from Alpha Web Academy
#include<iostream>
using namespace std;
class Employee{
	private:
		int empid;
		char empname[30];
		double salary;
		double bonus(){
			if (salary>=30000){
				return salary*30/100;  //9000
			}
			else{
				return salary*10/100;  //9000
			}
		}
	public:
		void storeData();  //prototype
		void displayData(){    //treat as inline
			cout<<"\n\nEmployee ID :\t" << empid << endl;
			cout<<"Employee Name:\t" << empname << endl;
			cout<<"Employee Salary:\t" << salary << "\n";
			cout<<"Employee Bonus:\t" << bonus() << "\n\n";  //private member function
		}
};

void Employee::storeData(){ //definition
	cout<<"Enter the employee id: ";
	cin >> empid;
	fflush(stdin);
	cout<<"Enter the employee name: ";
	cin >> empname;
	fflush(stdin);
	cout<<"Enter the employee salary: ";
	cin >> this->salary;		
}


int main(){
	Employee e1, e2;
	e1.storeData() ;    
	e2.storeData() ;
	
	e1.displayData() ;  
	e2.displayData() ; 
	
	return 0;
}
