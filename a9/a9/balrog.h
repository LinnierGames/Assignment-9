//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
balrog.h

*/
//***************************************************************************//

#ifndef _balrog_h_
#define _balrog_h_

#include "demon.h"

namespace cs_creature
{
	class balrog :
		public demon
	{
	public:
		balrog();
		balrog( int strength , int hitpoints );

		int getDamage();
		std::string getSpecies();
	};
}

#endif