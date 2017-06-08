#include <iostream>

using namespace std;


void addition(int& x, int& y, int& z);

int main()
{

	int u16Variable = 30;
	int& u16RefVariable = u16Variable;
	
	int param1 = 32;
	int param2 = 48;
	int result;
	
	cout << " u16Variable value is  " << u16Variable << endl;
	cout << " u16RefVariable value is  " << u16RefVariable << endl;

	u16RefVariable = 14;

	cout << " u16Variable value is  " << u16Variable << endl;
	cout << " u16RefVariable value is  " << u16RefVariable << endl;
	cout << " u16Variable address value is  " << &u16Variable << endl;
	cout << " u16RefVariable address value is  " << &u16RefVariable << endl;


	addition(param1, param2, result);
	cout << "result is " << result << endl ;	
	//We can see that using the reference modifies the same space of memory.


}


void addition(int& x, int& y, int& z)
{

	z = x + y ;

}

