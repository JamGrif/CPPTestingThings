#pragma once
#include "Creature.h"
class Player :
	public Creature
{
public:
	virtual void Attack();

private:
	std::string PName = "pLayer";
};

