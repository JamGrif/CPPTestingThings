#include <iostream>
using namespace std;

/*Pointer is just a variable that holds a memory address <------- Data type that "points" to another value stored in memory
& = get the address of / address of operator
* = get the value at / contents of operator / dereference

Declaring pointer:
int* p;
std::string* test;
float* ff;

Refer to new memory reserved during program execution
refer and share large data structures without making a copy of the structures
Used to specify relationships among data - linked lists, tress, graphs

*/
int main()
{
	int x = 25;
	int d = 0;
	int* p; //declared pointer
	p = &x; //p = address of x
	d = *p; //d = contents of address p is holding
	cout << p << endl;
	cout << d << endl;
}

