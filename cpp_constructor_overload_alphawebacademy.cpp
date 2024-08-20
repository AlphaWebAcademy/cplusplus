//Constructor Overloading - Polymorphism
//Alpha Web Academy (Sample Program for practice)
#include<iostream>
using namespace std;
class Employee{
	private:
		double salary;
	public:
		int eid;
		Employee(){	
			eid = 0;  salary=0.0;
		}
		Employee(int eid, double salary){	
			this->eid = eid;  this->salary = salary;
		}
		static void printdata(){ 
			cout<< eid <<"\t" << salary << endl;	 
		}
};
int main()
{
	Employee tarun(112, 392294.03);
 	Employee hari(115, 400000.00);
 	Employee jyothi;
 	
 	tarun.printdata();
	hari.printdata();   	
	jyothi.printdata();
	
}

