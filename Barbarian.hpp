/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The header file for the Barbarian class, an 
**                  inherited class of the Characters class. Barbarian.hpp
**                  declares the virtual functions for a Barbaian character's
**                  attack and defense rolls, takeDamage function, and a 
**                  function for printing the characteristics of a Barbarian.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Characters.hpp"

class Barbarian : public Characters
{
    private:

    public:
        Barbarian();    //Default constructor
        int attackRoll();   //Virtual function for Barbarian's attack roll
        int defenseRoll();  //Virtual function for Barbarian's defense roll
        void takeDamage(int);   //Virtual function for calculating damage
        void printChar();   //Virtual function to display characteristics
        ~Barbarian();   //Destructor
};

#endif