/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The header file for the HarryPotter class, an inherited
**                  class of the Characters class. HarryPotter.hpp
**                  declares one private member variable to track which
**                  life HP is on, virtual functions for a HP character's
**                  attack and defense rolls, virtual takeDamage function, 
**                  and a function for printing the characteristics of HP.
**                  This file also declares a constructor and destructor. 
*************************************************************************/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "Characters.hpp"

class HarryPotter : public Characters
{
    private:
        int lifeCounter; //Variable to track which life HP is on

    public:
        HarryPotter();    //Default constructor
        void setLifeCounter(int);   //Function sets the life counter
        int getLifeCounter();      //Function returns the value of counter
        int attackRoll();   //Virtual function for Harry Potter's attack roll
        int defenseRoll();  //Virtual function for Harry Potter's defense roll
        void takeDamage(int);   //Virtual function for calculating damage
        void printChar();   //Virtual function to display characteristics
        ~HarryPotter();   //Destructor
};

#endif