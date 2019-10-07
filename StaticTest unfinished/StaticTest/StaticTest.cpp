// Example program
#include <iostream>
#include <string>

class Animal {
public:
	Animal() 
	{
		Animals++;
	}
	void PrintAmount() 
	{
		std::cout << "There are " << Animals << " animals." << std::endl;
	}

	static int Animals;
};



int main()
{
	Animal animal1;
	animal1.PrintAmount();

}
