// Jyothi Jeyakumar from Alpha Web Academy Rajapalayam
//Class with Private Data Members
#include<iostream>
using namespace std;
class Student{		//BluePrint / Template
	private:
		int studid;		//data member
		char sname[30];
		double fees;
	public:
		void store_data(void);	//member function 
		void display_data(void){
			cout<<"\n\nStudent ID:   "<< studid;
			cout<<"\nStudent Name:   "<< sname;
			cout<<"\nFees:   "<< fees;
		}
};
void Student::store_data(){  // :: Scope Resolution Operator
	cout<<"Enter Student id: ";
	cin >> studid;
	cout<<"Enter Student name: ";
	cin >> sname;
	cout<<"Enter Student fees: ";
	cin >> fees;
}

int main(){
	Student s1, s2;
	s1.store_data();
	s2.store_data();
	s1.display_data();
	s2.display_data();
	return 0;
}
