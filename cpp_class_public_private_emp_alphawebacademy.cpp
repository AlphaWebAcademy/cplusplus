//Alpha Web Academy - Sample Class Program
//Jyothi Jeyakumar from Alpha Web Academy 
#include<iostream>
using namespace std;
// Class Definition
class Employee{				//Blueprint
	//Access Modifier or Visibility Label
	private:				//data hiding or Abstraction
		char empname[30];	// data member
		float age;			// data member	
		//private members need setter getter method
	public:
		int empid;			// data member
		void storedata(){	// inline member function/method
				cout<<"Enter Name\t: ";
				cin >> empname;
				cout<<"Enter Age\t: ";
				cin >> age;
		}
		void displaydata(){  // inline member
				cout<<"Name\t\t:\t" << empname << endl;
				cout<<"Age \t\t:\t" << age << endl;
		}
};

int main(){
	Employee empobj1;	// memory allocation 
	
	cout<<"Enter the details of Employee 1:\n";
	cout<<"--------------------------------\n";
	cout<<"Employee ID\t: ";
	cin >> empobj1.empid;
	empobj1.storedata();
	
	cout<<"\n\nCheck your detail for employee 1:\n";
	cout<<"---------------------------------\n";
	cout<<"Employee ID\t:\t" << empobj1.empid << endl;
	empobj1.displaydata();
	
	return 0;
}
