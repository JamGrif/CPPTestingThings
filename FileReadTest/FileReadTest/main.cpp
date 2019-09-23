#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

unsigned int ScoreRow = 0;
unsigned int ScoreColumn = 0;
unsigned short int ScoreColour = 0;

int PaddleSize = 0;
unsigned short int PaddleColour = 0;

unsigned short int BallColour = 0;

unsigned short int CourtBackColour = 0;
unsigned short int CourtSideColour = 0;

int main() 
{
	//Open file
	ifstream ReadInformation;
	ReadInformation.open("GameInformation.txt");
	
	//Check for errors
	if (ReadInformation.fail())
	{
		cerr << "Failed to read from text file, reset program." << endl;
		exit(0);
	}

	//
	

	

	ReadInformation.seekg(22);

	ReadInformation >> ScoreRow >> ScoreColumn >> ScoreColour;

	ReadInformation.seekg(50);
	ReadInformation >> PaddleSize >> PaddleColour;

	ReadInformation.seekg(68);
	ReadInformation >> BallColour;

	ReadInformation.seekg(89);
	ReadInformation >> CourtBackColour;
	ReadInformation >> CourtSideColour;

	//cout << "position is " << ReadInformation.tellg() << endl;

	ReadInformation.close();




	//print out variables
	cout << "Score row is " << ScoreRow << endl;
	cout << "Score column is " << ScoreColumn << endl;
	cout << "Score colour is " << ScoreColour << endl;

	cout << "Paddle size is " << PaddleSize << endl;
	cout << "Paddle colour is " << PaddleColour << endl;

	cout << "Ball colour is " << BallColour << endl;

	cout << "Court back colour is " << CourtBackColour << endl;
	cout << "Court side colour is " << CourtSideColour << endl;


}