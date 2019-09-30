#include <iostream>
using namespace std;
// * is deference
// & the address of variable

void passByValue(int x);
void passByReference(int* x);

int main()
{
	int fish = 5;
	int dog = 0;
	int* address;
	address = &fish; //memory address of fish
	dog = *address; //dog contains the value of the memory address of fish
	cout << dog << endl; //dog should be equal to fish (so 5)

	int value = 13;
	int reference = 13;

	passByValue(value);
	passByReference(&reference);

	cout << "value is: " << value << endl;
	cout << "reference is: " << reference << endl;

}

void passByValue(int x) //Pass copy. X is a copy of value variable
{
	x = 99;
}

void passByReference(int* x) //Take memory address of variable and directly change it
{
	*x = 66;
}
