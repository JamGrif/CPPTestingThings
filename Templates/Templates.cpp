#include <iostream>
#include <string>

//Simple template function to print out the parameter value
template<typename T>
void Print(T value) 
{
    std::cout << value << std::endl;
}

//Function to create arrays
template<typename T,int N>
class ArrayClass
{
public:
    int GetSize() const { return N; }

private:
    //Array of type T (which is specified at compile time> that is of size N (which is specified at compile time)
    T m_Array[N];

};





int main()
{
    //Can specify what type we want using angular brackets
    Print<int>(30);
    Print("Hello this is a template test");
    Print(80.3453f);

    //Creates an array of ints with size 10
    ArrayClass<int, 10> intarray;

    //Creates an array of strings with size 4
    ArrayClass<std::string, 4> stringarray;

    std::cout << intarray.GetSize() << std::endl;
    std::cout << stringarray.GetSize() << std::endl;

    
}

