#include <iostream>
using namespace std;
// * is deference
// & the address of variable

int passByValue(int x);
void passByReference(int &x);

int main()
{
	int v = 13;
	int r = 13;
	
	passByReference(r);

	cout << "value is: " << passByValue(v) << endl;
	cout << "reference is: " << r << endl;

}

int passByValue(int x) //Pass copy. X is a copy of value variable. Essentially creating a new variable called x
{
	return x + x;
}

void passByReference(int &x) //Take memory address of variable and directly change it. int &x is a reference variable of r variable. Meaning x  and r are connected
{
	x = x + x;
}



/*int fish = 5;
int dog = 0;
int* address;
address = &fish; //memory address of fish
dog = *address; //dog contains the value of the memory address of fish
cout << dog << endl; //dog should be equal to fish (so 5)*/
