//***************************************************************************//
/*
Assignment 8

Benjamin Hough
CS11 sect: 0445
oct 11, 2015
Dave Harden
elf.h

*/
//***************************************************************************//


#ifndef _elf_h_
#define _elf_h_

#include "creature.h"

namespace cs_creature
{
	class elf :
		public creature
	{
	public:
		elf();
		elf( int strength , int hitpoints );

		int getDamage();
		std::string getSpecies();
	};
}

#endif