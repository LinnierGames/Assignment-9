//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
demon.cpp

*/
//***************************************************************************//

#include "demon.h"
#include <iostream>


namespace cs_creature
{

	demon::demon()
	{
	}




	demon::demon( int strength , int hitpoints ):
		creature( strength , hitpoints )
	{
	}




	int demon::getDamage()
	{
		int damage = creature::getDamage();

		std::cout << "attacks for " << damage << " points!" << std::endl;

		if ( rand() % 4 == 0 )
		{
			std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
			damage += 50;
		}

		return damage;
	}




	std::string demon::getSpecies()
	{
		return "demon";
	}



}