//***************************************************************************//
/*
 Assignment 8
 
 Benjamin Hough
 CS11 sect: 0445
 oct 11, 2015
 Dave Harden
 a8.cpp
 
 */
//***************************************************************************//


#include <cmath>
#include <iostream>
#include <time.h>
#include <string>
#include "human.h"
#include "elf.h"
#include "cyberdemon.h"
#include "balrog.h"


using namespace std;
using namespace cs_creature;


int main()
{
    srand( time( 0 ) );
    
    human h1;
    elf e1;
    cyberdemon c1;
    balrog b1;
    
    human h( 20 , 30 );
    elf e( 40 , 50 );
    cyberdemon c( 60 , 70 );
    balrog b( 80 , 90 );
    
    
    
    cout << "default human strength/hitpoints: " << h1.getStrength() << "/" << h1.getHitpoints() << endl;
    cout << "default elf strength/hitpoints: " << e1.getStrength() << "/" << e1.getHitpoints() << endl;
    cout << "default cyberdemon strength/hitpoints: " << c1.getStrength() << "/" << c1.getHitpoints() << endl;
    cout << "default balrog strength/hitpoints: " << b1.getStrength() << "/" << b1.getHitpoints() << endl;
    cout << "non-default human strength/hitpoints: " << h.getStrength() << "/" << h.getHitpoints() << endl;
    cout << "non-default elf strength/hitpoints: " << e.getStrength() << "/" << e.getHitpoints() << endl;
    cout << "non-default cyberdemon strength/hitpoints: " << c.getStrength() << "/" << c.getHitpoints() << endl;
    cout << "non-default balrog strength/hitpoints: " << b.getStrength() << "/" << b.getHitpoints() << endl;
    cout << endl << endl;
    
    cout << "Examples of " << h.getSpecies() << " damage: " << endl;
    for ( int i = 0; i < 10; i++ )
    {
        int damage = h.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    
    cout << "Examples of " << e.getSpecies() << " damage: " << endl;
    for ( int i = 0; i < 10; i++ )
    {
        int damage = e.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    
    cout << "Examples of " << c.getSpecies() << " damage: " << endl;
    for ( int i = 0; i < 10; i++ )
    {
        int damage = c.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    
    cout << "Examples of " << b.getSpecies() << " damage: " << endl;
    for ( int i = 0; i < 10; i++ )
    {
        int damage = b.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
}




///////////////////////////////////////////////////////////////////////////////
/*
 
 default human strength/hitpoints: 10/10
 default elf strength/hitpoints: 10/10
 default cyberdemon strength/hitpoints: 10/10
 default balrog strength/hitpoints: 10/10
 non-default human strength/hitpoints: 20/30
 non-default elf strength/hitpoints: 40/50
 non-default cyberdemon strength/hitpoints: 60/70
 non-default balrog strength/hitpoints: 80/90
 
 
 Examples of human damage:
 The human attacks for 7 points!
 Total damage = 7
 
 The human attacks for 15 points!
 Total damage = 15
 
 The human attacks for 4 points!
 Total damage = 4
 
 The human attacks for 8 points!
 Total damage = 8
 
 The human attacks for 19 points!
 Total damage = 19
 
 The human attacks for 11 points!
 Total damage = 11
 
 The human attacks for 9 points!
 Total damage = 9
 
 The human attacks for 9 points!
 Total damage = 9
 
 The human attacks for 10 points!
 Total damage = 10
 
 The human attacks for 7 points!
 Total damage = 7
 
 
 Examples of elf damage:
 The elf attacks for 9 points!
 Total damage = 9
 
 The elf attacks for 37 points!
 Magical attack inflicts 37 additional damage points!
 Total damage = 74
 
 The elf attacks for 35 points!
 Total damage = 35
 
 The elf attacks for 21 points!
 Total damage = 21
 
 The elf attacks for 28 points!
 Magical attack inflicts 28 additional damage points!
 Total damage = 56
 
 The elf attacks for 39 points!
 Total damage = 39
 
 The elf attacks for 2 points!
 Magical attack inflicts 2 additional damage points!
 Total damage = 4
 
 The elf attacks for 16 points!
 Total damage = 16
 
 The elf attacks for 23 points!
 Total damage = 23
 
 The elf attacks for 28 points!
 Total damage = 28
 
 
 Examples of cyberdemon damage:
 The cyberdemon attacks for 18 points!
 Total damage = 18
 
 The cyberdemon attacks for 12 points!
 Total damage = 12
 
 The cyberdemon attacks for 29 points!
 Demonic attack inflicts 50 additional damage points!
 Total damage = 79
 
 The cyberdemon attacks for 49 points!
 Total damage = 49
 
 The cyberdemon attacks for 35 points!
 Demonic attack inflicts 50 additional damage points!
 Total damage = 85
 
 The cyberdemon attacks for 2 points!
 Total damage = 2
 
 The cyberdemon attacks for 12 points!
 Total damage = 12
 
 The cyberdemon attacks for 23 points!
 Total damage = 23
 
 The cyberdemon attacks for 46 points!
 Total damage = 46
 
 The cyberdemon attacks for 60 points!
 Total damage = 60
 
 
 Examples of balrog damage:
 The balrog attacks for 47 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 74 additional damage points!
 Total damage = 171
 
 The balrog attacks for 8 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 31 additional damage points!
 Total damage = 89
 
 The balrog attacks for 8 points!
 Balrog speed attack inflicts 29 additional damage points!
 Total damage = 37
 
 The balrog attacks for 80 points!
 Balrog speed attack inflicts 25 additional damage points!
 Total damage = 105
 
 The balrog attacks for 39 points!
 Balrog speed attack inflicts 19 additional damage points!
 Total damage = 58
 
 The balrog attacks for 33 points!
 Balrog speed attack inflicts 50 additional damage points!
 Total damage = 83
 
 The balrog attacks for 70 points!
 Balrog speed attack inflicts 1 additional damage points!
 Total damage = 71
 
 The balrog attacks for 38 points!
 Balrog speed attack inflicts 60 additional damage points!
 Total damage = 98
 
 The balrog attacks for 47 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 55 additional damage points!
 Total damage = 152
 
 The balrog attacks for 65 points!
 Balrog speed attack inflicts 20 additional damage points!
 Total damage = 85
 
 
 Press any key to continue . . .
 
 */