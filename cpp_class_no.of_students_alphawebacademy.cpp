// Jyothi Jeyakumar from Alpha Web Academy Rajapalayam
#include<iostream>
using namespace std;

class student{
	private:   //data hiding OOPS
		int studid;
		char sname[30];		// Array within structure
		double fees;
		
};

int main(){
	student s1[100];	//Array of Objects
	int n, i, j;
	
	cout<<"How many students: ? ";
	cin>>n;
	
	for (i = 0; i<n; i++){	
		cout<<"Enter Student id for student "<< i+1 <<": ";
		cin >> s1[i].studid;	// 0 1 2 3 4 
		cout<<"Enter Student name for student "<< i+1 <<": ";
		cin >> s1[i].sname;
		fflush(stdin);
		cout<<"Enter Student fees for student "<< i+1 <<": ";
		cin >> s1[i].fees;
	}

	 
	for (i = 0; i<n; i++){	
		cout<<"Persoanl Detail of Student " << i+1 <<":\n"; 
		cout<<"\n\nStudent ID:   "<< s1[i].studid;
		cout<<"\nStudent Name:   "<< s1[i].sname;
		cout<<"\nFees:   "<< s1[i].fees;		
	}
 
	return 0;
}
