/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The source code file for the Characters abstract class,
**                  which defines getter and setter functions for the
**                  different characters armor, strength, and type. This
**                  file also includes an empty definition for the
**                  character constructor and destructor.
*************************************************************************/

#include <iostream>
#include "Characters.hpp"

/*Default constructor intentioanlly left empty as Characters are constructed
in the derived classes' constructor. */
Characters::Characters()
{

}

//Function to set the armor value for a Character
void Characters::setArmor(int armorIn)
{
    armor = armorIn;
}

//Function returns the value of a Character's armor
int Characters::getArmor()
{
    return armor;
}

//Function to set the strength value of a Character
void Characters::setStrength(int strengthIn)
{
    strength = strengthIn;
}

//Function returns the value of a Character's strength
int Characters::getStrength()
{
    return strength;
}

//Function sets the type name of Character 
void Characters::setType(std::string typeIn)
{
    type = typeIn;
}

//Function returns the name of a Character type
std::string Characters::getType()
{
    return type;
}

//Destructor
Characters::~Characters()
{

}