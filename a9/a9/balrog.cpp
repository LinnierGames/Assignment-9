//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
balrog.cpp

*/
//***************************************************************************//


#include "balrog.h"
#include <iostream>


namespace cs_creature
{
	balrog::balrog()
	{
	}




	balrog::balrog( int strength , int hitpoints ):
		demon( strength , hitpoints )
	{
	}




	int balrog::getDamage()
	{
		std::cout << "The balrog ";
		int damage = demon::getDamage();
		int damage2 = ( rand() % creature::getStrength() ) + 1;
		std::cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << std::endl;
		return damage + damage2;
	}




	std::string balrog::getSpecies()
	{
		return "balrog";
	}



}