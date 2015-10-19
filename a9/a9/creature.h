//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
creature.h

*/
//***************************************************************************//

#ifndef _creature_h_
#define _creature_h_

#include<string>

namespace cs_creature
{
	class creature
	{
	public:
		creature();
		creature( int strengthIn , int hitpointsIn );

		std::string getSpecies();
		int getDamage();

		int getHitpoints();
		int getStrength();

		void setHitpoints( int hitpoints );
		void setStrength( int strength );

	private:
		int strength;
		int hitpoints;
	};
}

#endif