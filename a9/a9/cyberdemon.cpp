//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
cyberdemon.cpp

*/
//***************************************************************************//

#include "cyberdemon.h"
#include <iostream>


namespace cs_creature
{
	cyberdemon::cyberdemon()
	{
	}




	cyberdemon::cyberdemon( int strength , int hitpoints ):
		demon( strength , hitpoints )
	{
	}




	int cyberdemon::getDamage()
	{
		std::cout << "The cyberdemon ";
		return demon::getDamage();
	}




	std::string cyberdemon::getSpecies()
	{
		return "cyberdemon";
	}


}