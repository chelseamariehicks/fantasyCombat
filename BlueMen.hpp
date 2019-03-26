/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The header file for the BlueMen class, an 
**                  inherited class of the Characters class. BlueMen.hpp
**                  declares the virtual functions for the Blue Men 
**                  character's attack and defense rolls, takeDamage 
**                  function, and a function for printing the
**                  characteristics of the Blue Men. This file also
**                  declares a constructor and destructor. 
*************************************************************************/

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "Characters.hpp"

class BlueMen : public Characters
{
    private:

    public:
        BlueMen();    //Default constructor
        int attackRoll();   //Virtual function for the Blue Men's attack roll
        int defenseRoll();  //Virtual function for Blue Men's defense roll
        void takeDamage(int);   //Virtual function for calculating damage
        void printChar();   //Virtual function to display characteristics
        ~BlueMen();   //Destructor

};

#endif