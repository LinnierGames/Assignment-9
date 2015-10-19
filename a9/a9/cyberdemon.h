//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
cyberdemon.h

*/
//***************************************************************************//

#ifndef _cyberdemon_h_
#define _cyberdemon_h_

#include "demon.h"

namespace cs_creature
{
	class cyberdemon :
		public demon
	{
	public:
		cyberdemon();
		cyberdemon( int strength , int hitpoints );

		int getDamage();
		std::string getSpecies();
	};

}

#endif