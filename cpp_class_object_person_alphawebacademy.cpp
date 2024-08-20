// Jyothi Jeyakumar from Alpha Web Academy Rajapalayam
//OOPs Object Oriented Programming
//CLASS OBJECT ABSTRACTION
//TO STORE PERSON DETAILS USING CLASS CONCEPT
#include<iostream>
#include<conio.h>
using namespace std;
//class definition
class Person{
	//Person - user defined data types
	//visibility label or access modifer
	//private, public, protected
  private:
	  char *name;  //data member
	  int age;     //data member
  public:
	int pid;  // public data member
	// do the homework for Box class with three members
	// like Height, length and breadth  (public members)
	// okay?   I can hear you
	//class member function (Definition inside the class defition)
	void storeData(){
	  cout<<"Enter Name: ";
	  cin>> name;
	  cout<<"Enter Age: ";
	  cin>> age;
	}
	void displayData(){
	  cout<<"Person Name : " << name << "\n\n";
	  cout<<"Person Age  : " << age << "\n\n";
	}
};

int main()
{
 //Object Creation
 Person p1;   //it will allocate memory space for all the data member
 //cout<<"Enter name: ";
 //cin>>p1.name;  //illgal access becoz it is private
 //cout<<"Enter age: ";
 //cin>>p1.age;       //illgal access
 p1.storeData();
 cout<<"Enter Person ID: ";
 cin>>p1.pid;  //legal access

// cout<<"Person Name : " << p1.name << "\n\n";     //illgal access
 cout<<"\n\nPerson ID :  " << p1.pid  <<"\n\n";
 p1.displayData();

 return 0;

}
