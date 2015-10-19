//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
elf.cpp

*/
//***************************************************************************//

#include "elf.h"
#include <iostream>


namespace cs_creature
{
	elf::elf()
	{
	}




	elf::elf( int strength , int hitpoints ) :
		creature( strength , hitpoints )
	{
	}




	int elf::getDamage()
	{
		int damage = creature::getDamage();
		std::cout << "The elf attacks for " << damage << " points!" << std::endl;

		if ( rand() % 2 == 0 )
		{
			std::cout << "Magical attack inflicts " << damage << " additional damage points!" << std::endl;
			damage *= 2;
		}

		return damage;
	}




	std::string elf::getSpecies()
	{
		return "elf";
	}

}