//Constructor - automatic initialization of objects
//Jyothi Jeyakumar from Alpha Web Academy  (Sample Program for practice)
#include <iostream>
using namespace std;
class Cube
{
  public:
    int side;
    Cube()	//Constructor
	{
		cout<<"Default Constructor Called.\n";
	    side = 10;
	}
    Cube(int x)
    {
    	cout<<"Parameterized Constructor Called.\n";
	    side=x;
    }
};

int main()
{
    Cube c1;
    Cube c2(20);
    Cube c3(30);
    Cube c4;
    cout << c1.side << endl;
    cout << c2.side << endl;
    cout << c3.side << endl;
    cout << c4.side << endl;
}
