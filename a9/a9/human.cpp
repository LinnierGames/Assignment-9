//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
human.cpp

*/
//***************************************************************************//


#include "human.h"
#include <iostream>


namespace cs_creature
{
	human::human()
	{
	}




	human::human( int strength , int hitpoints ) :
		creature( strength , hitpoints )
	{
	}




	int human::getDamage()
	{
		int damage = creature::getDamage();
		std::cout << "The human attacks for " << damage << " points! " << std::endl;
		return damage;
	}




	std::string human::getSpecies()
	{
		return "human";
	}

}