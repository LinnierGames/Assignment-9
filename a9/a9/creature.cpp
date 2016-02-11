//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
creature.cpp

*/
//***************************************************************************//

#include "creature.h"

#include <stdlib.h>


namespace cs_creature
{
	creature::creature()
	{
		hitpoints = 10;
		strength = 10;
	}




	creature::creature( int strengthIn , int hitpointsIn )
	{
		hitpoints = hitpointsIn;
		strength = strengthIn;
	}




	std::string creature::getSpecies()
	{
		return "creature";
	}




	int creature::getDamage()
	{
		return ( rand() % strength ) + 1;
	}




	int creature::getHitpoints()
	{
		return hitpoints;
	}




	int creature::getStrength()
	{
		return strength;
	}




	void creature::setHitpoints( int hitpoints )
	{
		this->hitpoints = hitpoints;
	}




	void creature::setStrength( int strength )
	{
		this->strength = strength;
	}
}