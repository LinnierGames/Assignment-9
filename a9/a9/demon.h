//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
demon.h

*/
//***************************************************************************//


#ifndef _demon_h_
#define _demon_h_

#include "creature.h"

namespace cs_creature
{
	class demon :
		public creature
	{
	public:
		demon();
		demon( int strength , int hitpoints );

		int getDamage();
		std::string getSpecies();
	};

}

#endif