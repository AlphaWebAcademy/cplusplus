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
	        side = 10;
	    }
};

int main()
{
    Cube c;
    cout << c.side;
}


