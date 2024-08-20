//Constructor - Destructor
//Alpha Web Academy (Sample Program for practice)
#include <iostream>
using namespace std;
class A
{
	public:
	    A(){		// constructor
	        cout << "Constructor called\n";
	    }
	    ~A(){	// destructor 
	        cout << "Destructor called\n";
	    }
};

int main()
{
    A obj1;   // Constructor Called
    int x = 1;
    if(x)
    {
        A obj2;  // Constructor Called
    }   // Destructor Called for obj2
    
	//getch();
} //  Destructor called for obj1
//User Screen (Alt + F5)
