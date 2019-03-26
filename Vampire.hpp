/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The header file for the Vamire class, an inherited
**                  class of the Characters class. Vampire.hpp declares
**                  one private member variable to determine if the
**                  Vampire has used its charming defense. This file
**                  also declares the virtual functions for a Vampire 
**                  character's attack and defense rolls, takeDamage 
**                  function, getter and setter for charming, and a 
**                  function for printing the characteristics of a Vampire.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Characters.hpp"

class Vampire : public Characters
{
    private:
        bool charming;
    public:
        Vampire();  //Default constructor
        int attackRoll();   //Virtual function for Barbarian's attack roll
        int defenseRoll();  //Virtual function for Barbarian's defense roll
        void takeDamage(int);   //Virtual function for calculating damage
        void printChar();   //Virtual function to display characteristics
        void setCharming(bool); /*Function sets the value of Vampire's charming
                                variable. */
        bool getCharming();   //Function returns whether a Vampire used charming
        ~Vampire(); //Destructor
};

#endif