#pragma once
#include "Creature.h"
class Enemy :
	public Creature
{
public:
	virtual void Attack();


private:
	std::string EName = "eNemy";


};

