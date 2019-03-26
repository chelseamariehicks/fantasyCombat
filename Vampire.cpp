/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The source code file for the Vampire class defines
**                  the constructor for a Vampire character, setting
**                  the character's armor, strength, type, and charming, 
**                  as well as the getter/setter functions for whether
**                  a Vampire has used its special ability to charm.
**                  The functions for a Vampire's particular attack roll, 
**                  defense roll, including the ability to charm, and 
**                  calculating the damage from an attack are also 
**                  defined here.
*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "Vampire.hpp"

using std::cout;
using std::cin;
using std::endl;

/*Default constructor for a Vampire Character sets armor to 1, strength to 
18, charming to false (currently not being used), and type name to "Vampire". */
Vampire::Vampire()
{
    this->armor = 1;
    this->strength = 18;
    this->type = "Vampire";
    this->charming = false;
}

/*Function returns the result of rolling a 12-sided die,
the attack roll for a Vampire. */         
int Vampire::attackRoll()
{
    //Roll a random number on a 12-sided die
    attack = rand() % 12 + 1;

    return attack;
}  

/*Function returns the result of rolling a 6-sided die,
the defense roll for a Vampire, and creates a 50% chance
of the Vampire blocking the opponent's attack via the Vampire's
special ability to charm. */
int Vampire::defenseRoll()
{
    /*Select a random number, either 0 or 1, to determine if
    the Vampire uses its special ability. */
    int toCharm = rand() % 2;

    /*If the Vampire uses its special ability, print out a statement
    to the players, set the defense to 0, and update charming to true,
    which will be used to appropriately determine the damage to the
    Vampire Character. */
    if (toCharm == 0)
    {
        //Sets charming to true when a charm is being used
        this->charming = true;

        //Prints message to user that the charm has been used
        cout << " defends with a charm!" << endl;
        cout << "This Vampire has charmed its opponent into not" << endl;
        cout << "attacking!" << endl;
        defense = 0;
        return defense;
    }
    /*Regular defense roll for an instance when a Vampire doesn't use its
    special ability. */
    else if (toCharm == 1)
    {
        //Roll a random number on a 12-sided die
        defense = rand() % 6 + 1;

        //Completes the statement printing the defense roll in GamePlay.cpp
        cout << " defends with a roll of " << defense << "." << endl;

        return defense;
    }
    return 0;
}

/*Function calculates the damage done to a Vampire in an attack and updates the 
strength of the Vampire Character. If the Vampire used a charm for defense, no
damage has been done to the Vampire and their strength remains unchanged. */        
void Vampire::takeDamage(int attackIn)
{
    /*Checks if the Vampire used its special ability. If so, the damage is
    set at 0 for this attack, the strength remains unchanged, and the charming
    variable is returned to false. */    
    if (this->charming == true)
    {
        this->damage = 0;
        this->strength -= damage;
        this->charming = false;
    }

    /*If the special ability was not used, the damage is calculated 
    for the attack like all of the other characters. */
    else
    {
        /*Calculates the damage by subtracting the defense roll and
        armor value of the Vampire from the opponent's attack roll, */
        this->damage = attackIn - this->defense - this->armor;

        /*If statement prevents the strength of a character from increasing
        by subtracting a negative damage value on strength. If damage is less
        than zero, the damage is reset to be equal to zero.*/
        if (damage < 0)
        {
            damage = 0;
        }

        //Updates strength by subtracting the damage
        this->strength -= damage;
    }

    //Completes the statement printing the defense roll in GamePlay.cpp
    cout << " is " << damage << "." << endl;
}

/*Function prints the characteristics of the Vampire for
the player that has selected this character. */
void Vampire::printChar()
{
    cout << "......................................." << endl;
    cout << "Suave, debonair, but vicious and " << endl;
    cout << "surprisingly resilient." << endl;
    cout << endl;
    cout << "Special Ability:" << endl;
    cout << "Charm: Vampires can charm an opponent " << endl; 
    cout << "into not attacking. For a given attack " << endl; 
    cout << "there is a 50% chance that their " << endl;
    cout << "opponent does not actually attack them." << endl;
    cout << "......................................." << endl;
    cout << endl;
    cout << endl;
}

//Function sets the bool for whether a Vampire has used charm or not
void Vampire::setCharming(bool charmingIn)
{
    charming = charmingIn;
}

//Function returns a bool for whether the Vampire is using its special ability to charm
bool Vampire::getCharming()
{
    return charming;
}

//Destructor declared, but not defined
Vampire::~Vampire()
{

}