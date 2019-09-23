#include <iostream>
using namespace std;

class CourtClass 
{
public:





	//Court Dimensions
	static int m_MinX;
	static int m_MaxX;
	static int m_MinY;
	static int m_MaxY;
};

class PaddleClass
{
public:
	void PrintDimensions()
	{
		cout << "P Min x is " << m_MinX << endl;
		cout << "P Max x is " << m_MaxX << endl;
		cout << "P Min y is " << m_MinY << endl;
		cout << "P Max x is " << m_MaxY << endl << endl;
	}

	//Court Dimensions
	static int m_MinX;
	static int m_MaxX;
	static int m_MinY;
	static int m_MaxY;
};

class BallClass
{
public:
	void PrintDimensions()
	{
		cout << "B Min x is " << m_MinX << endl;
		cout << "B Max x is " << m_MaxX << endl;
		cout << "B Min y is " << m_MinY << endl;
		cout << "B Max x is " << m_MaxY << endl;
	}

	//Court Dimensions
	static int m_MinX;
	static int m_MaxX;
	static int m_MinY;
	static int m_MaxY;
};

int CourtClass::m_MinX = 0;
int CourtClass::m_MaxX = 50;
int CourtClass::m_MinY = 0;
int CourtClass::m_MaxY = 25;

int main()
{
	PaddleClass paddleobj;
	BallClass ballobj;

	paddleobj.PrintDimensions();
	ballobj.PrintDimensions();

}




