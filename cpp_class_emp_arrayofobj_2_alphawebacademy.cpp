//Jyothi Jeyakumar from Alpha Web Academy Rajapalayam
#include <iostream>
using namespace std;
class Employee{
	public:
		int empid;
		char ename[30];
		double salary;
};

int main(){
	Employee e[10];
	int n,i;
	cout<<"Enter the no.of employee:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)	{	// 0 1 2 3 4 
		cout<<"Enter the Employee Id:"<<endl;
		cin>>e[i].empid;
		cout<<"Enter the Employee Name:"<<endl;
		cin>>e[i].ename;
		cout<<"Enter the Employee Salary:"<<endl;
		cin>>e[i].salary;
	}
	
	for(i=0;i<n;i++)	{	// 0 1 2 3 4 5
		cout<<"\n\nEmployee Id: "<< e[i].empid << endl;
		cout<<"Employee Name:"<< e[i].ename << endl;
		cout<<"Employee Salary:"<< e[i].salary << endl;
	}
	
	return 0;
}
