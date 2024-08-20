// Jyothi Jeyakumar from Alpha Web Academy Rajapalayam
#include<iostream>
using namespace std;

class Student{		//BluePrint  Template
	private:
		int studid;		//data member
		char sname[30];
		double fees;
	public:
		//getter method
		int get_studid(){
			return studid;
		}
		// settor method / function
		void set_studid(id){
			studid =id;
		}
		
		
		void store_data(void);		//member function declaration or prototype
		void display_data(void){
			cout<<"\n\nStudent ID:   "<< studid;
			cout<<"\nStudent Name:   "<< sname;
			cout<<"\nFees:   "<< fees;
		}
};


//		::  Scope Resolution Operator

void Student::store_data(studid, sname, fees){
	// this keyword it alwarys refers current object
	this.studid = studid;
	cout<<"Enter Student name: ";
	cin >> sname;
	cout<<"Enter Student fees: ";
	cin >> fees;
}

int main(){
	int studid;
	char sname[30];
	doubel fees;
	
	Student s1, s2;
	cout<<"Enter Student1 id: ";
	cin >> studid;
	cout<<"Enter Student1 name: ";
	cin >> sname;
	cout<<"Enter Student1 fees: ";
	cin >> fees;
	
	s1.store_data(studid, sname, fees);		//sending argument to the class member function definition
	
	s2.store_data();
	s1.display_data();
	s2.display_data();
	return 0;
}
