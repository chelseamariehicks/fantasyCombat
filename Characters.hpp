/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The header file for the Characters abstract class, which
**                  declares protected member variables, getter and
**                  setter functions, and virtual functions to be inherited 
**                  by the child classes Vampire, Barbarian, BlueMen, 
**                  Medusa, and HarryPotter.
*************************************************************************/

#ifndef CHARACTERS_HPP
#define CHARACTERS_HPP

#include <string>

class Characters
{
    protected:
        std::string type;     //Variable for the type of character
        int armor;           //Variable for the armor value of a Character
        int strength;       //Variable for the strength of a Character
        int damage;         //Variable for the damage value of an attack
        int attack, defense; //Variables to hold Character rolls

    public:
        Characters();   //Default constructor
        virtual int attackRoll() = 0; /*Pure virtual function to roll
                                    a value for an attack by a Character.*/
        virtual int defenseRoll() = 0; /*Pure virtual function to roll a
                                      value for a Character's defense.*/
        virtual void takeDamage(int) = 0; /*Pure virtual function to
                                          calculate damage of an attack.*/
        virtual void printChar() = 0; /*Pure virtual function prints the 
                                      characteristics of a Character type.*/
        void setArmor(int); //Function sets value of armor for a Character
        int getArmor();     //Function returns armor value for Character
        void setStrength(int); //Function sets value of strength for Character
        int getStrength();  //Function returns the strength of a Character
        void setType(std::string); /*Function sets the Character type as a string
                                    allowing for the type name to be printed
                                    using getType() function. */
        std::string getType();    //Function returns the name of the Character type
        virtual ~Characters(); //Destructor
        



};

#endif