#include <iostream>

using namespace std;


class Box
{
    private:
        
        int length;
	//int height;
	int breadth;
    protected:
 	int height;
    public:	
	Box();
	Box(int h, int l);
	void SetLenght(int x);	
  	void SetHeight(int x);	
	void SetBreadth(int x);	
	int getVolume();
};

class BoxBrand: public Box
{
	string name;
	public:
	BoxBrand();
	BoxBrand(string S);
	BoxBrand(string S, int h, int l);
	string getBrand();

};

BoxBrand::BoxBrand()
{

	name  = "No Brand";

}

BoxBrand::BoxBrand(string S):name(S){}

BoxBrand::BoxBrand(string S, int h, int l):name(S),Box(h, l){}

string BoxBrand :: getBrand()
{

	return name;
}

Box::Box()
{
	cout << "Box Constructor called" << endl ;
	length = height = breadth = 0;
}


Box::Box(int h, int l):height(h),length(l){}

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
BoxBrand myBoxBrand("Levis", 5,10);

int main()
{
	int temp;
//	cout << "Enter length of " << myBoxBrand.getBrand() << endl;
//	cin >>  temp;
//	myBoxBrand.SetLenght(temp);

//	cout << "Enter Height" << endl;
//	cin >>  temp;
//	myBoxBrand.SetHeight(temp);

	cout << "Enter Breadth MyBoxBrand" << endl;
	cin >>  temp;
	myBoxBrand.SetBreadth(temp);

	cout << "Volume MyBoxBrand is:" << myBoxBrand.getVolume() << endl;

	cout << "Enter Breadth" << endl;
	cin >>  temp;
	myBox.SetBreadth(temp);

	cout << "Volume Box is:" << myBox.getVolume() << endl;
	return 0;
}
