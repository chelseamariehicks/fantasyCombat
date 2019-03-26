/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The header file for the Medusa class, an inherited
**                  class of the Characters class. Medusa.hpp declares
**                  the virtual functions for a Medusa character's
**                  attack and defense rolls, takeDamage function, and a 
**                  function for printing the characteristics of a Medusa.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Characters.hpp"

class Medusa : public Characters
{
    private:

    public:
        Medusa();    //Default constructor
        int attackRoll();   //Virtual function for Medusa's attack roll
        int defenseRoll();  //Virtual function for Medusa's defense roll
        void takeDamage(int);   //Virtual function for calculating damage
        void printChar();   //Virtual function to display characteristics
        ~Medusa();   //Destructor

};

#endif