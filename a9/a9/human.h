//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
human.h

*/
//***************************************************************************//


#ifndef _human_h_
#define _human_h_

#include "creature.h"

namespace cs_creature
{
	class human :
		public creature
	{
	public:
		human();
		human( int strength , int hitpoints );

		int getDamage();
		std::string getSpecies();
	};

}

#endif