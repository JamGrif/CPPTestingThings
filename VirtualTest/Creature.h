#pragma once
#include <iostream>
#include <string>
//Abstract base class / pure virtual function
class Creature
{
public:

	virtual void Attack()=0;

protected:
	std::string CName = "cReature";

};

