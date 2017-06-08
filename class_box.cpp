#include <iostream>

using namespace std;


class Box
{
    private:
        
        int length;
	int height;
	int breadth;
    public:	
	Box();
	Box(int h, int l);
	void SetLenght(int x);	
  	void SetHeight(int x);	
	void SetBreadth(int x);	
	int getVolume();
};

Box::Box()
{
	cout << "Box Constructor called" << endl ;
	length = height = breadth = 0;

}


Box::Box(int h, int l):height(h),length(l)
{
//	cout << "Setting Height" << endl; 
//	height = h;
}

void Box::SetLenght(int x)
{
	length = x;
}

void Box::SetHeight(int x)
{
	height = x;
}

void Box::SetBreadth(int x)
{
	breadth = x;
}

int Box::getVolume()
{
	return length * height * breadth ;
}

Box myBox(10,10);

int main()
{
	int temp;
//	cout << "Enter length" << endl;
//	cin >>  temp;
//	myBox.SetLenght(temp);

//	cout << "Enter Height" << endl;
//	cin >>  temp;
//	myBox.SetHeight(temp);

	cout << "Enter Breadth" << endl;
	cin >>  temp;
	myBox.SetBreadth(temp);

	cout << "Volume is:" << myBox.getVolume() << endl;
	return 0;
}
