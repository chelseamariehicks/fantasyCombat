/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The source code file for the Medusa class defines
**                  the constructor for a Medusa character, setting
**                  the character's armor, strength, and type, as well as 
**                  the functions for Medusa's particular attack roll that
**                  includes her special ability of the glare, defense
**                  roll, and calculating the damage from an attack.
*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "Medusa.hpp"

using std::cout;
using std::cin;
using std::endl;

/*Default constructor for a Medusa Character sets the armor to 3, strength to 8,
and the character name to "Medusa". */
Medusa::Medusa()
{
    this->armor = 3;
    this->strength = 8;
    this->type = "Medusa";
}

/*Function returns the result of rolling 2 6-sided dice,
the attack roll for a Medusa. This also function also accounts for 
Medusa's special ability to Glare and turn her opponent to stone. */
int Medusa::attackRoll()
{
    //Variables for the two dice being rolled
    int die1, die2;

    //Roll a random number on a 6-sided die for each die
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;

    //Calculate the attack roll by finding the sum of two 6-sided die rolls
    attack = die1 + die2;

    /*If Medusa rolls a 12, her special ability comes into play
    and she turns her opponent to stone. The attack value is set high to
    ensure the attack kills her opponent by depleting all their strength
    and impossible to defend against. */
    if (attack == 12)
    {
        /*Prints a statement to inform players that Medusa has used 
        her special ability. */
        cout << "Medusa has turned her opponent to stone!" << endl;
        attack = 1000;
    }
    return attack;

}

/*Function returns the result of rolling a 6-sided die, the defense roll 
for a Medusa Character. */        
int Medusa::defenseRoll()
{
    //Roll a random number between 1-6
    defense = rand() % 6 + 1;

    //Completes the statement printing the defense roll in GamePlay.cpp
    cout << " defends with a roll of " << defense << "." << endl;
    
    return defense;
}

/*Function calculates the damage done to Medusa in an 
attack and updates the strength of the Medusa Character. */
void Medusa::takeDamage(int attackIn)
{
    /*Calculates the damage by subtracting the defense roll and
    armor value of Medusa from the opponent's attack roll, */
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

    //Completes the statement printing the defense roll in GamePlay.cpp
    cout << " is " << damage << "." << endl;

}

/*Function prints the characteristics of Medusa for
the player that has selected this character. */
void Medusa::printChar()
{
    cout << "......................................." << endl;
    cout << "Scrawny lady with snakes for hair which " << endl;
    cout << "helps her during combat." << endl; 
    cout << "Just don’t look at her!" << endl;
    cout << endl;
    cout << "Special Ability:" << endl;
    cout << "Glare: If a Medusa rolls a 12 when" << endl;
    cout << "attacking then the target instantly" << endl;
    cout << "gets turned into stone and Medusa wins!" << endl;
    cout << "......................................." << endl;
    cout << endl;
    cout << endl;
}
        
//Destructor declared, but not defined
Medusa::~Medusa()
{

}