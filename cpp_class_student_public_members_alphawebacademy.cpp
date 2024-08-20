//Alpha Web Academy
//Class with Public Members
#include<iostream>
using namespace std;
class student{
	public:
		int studid;
		char sname[30];
		double fees;
};
int main(){
	student s1, s2;
	cout<<"Enter Student id for student1: ";
	cin >> s1.studid;
	cout<<"Enter Student name for student1: ";
	cin >> s1.sname;
	cout<<"Enter Student fees for student1: ";
	cin >> s1.fees;
	cout<<"\n\nEnter Student id for student2: ";
	cin >> s2.studid;
	cout<<"Enter Student name for student2: ";
	cin >> s2.sname;
	cout<<"Enter Student fees for student2: ";
	cin >> s2.fees;
	cout<<"\n\nStudent ID\t:   "<< s1.studid;
	cout<<"\nStudent Name\t:   "<< s1.sname;
	cout<<"\nStudent Fees\t:   "<< s1.fees;
	cout<<"\n\nStudent ID\t:   "<< s2.studid;
	cout<<"\nStudent Name\t:   "<< s2.sname;
	cout<<"\nStudent Fees\t:   "<< s2.fees;
	return 0;
}
