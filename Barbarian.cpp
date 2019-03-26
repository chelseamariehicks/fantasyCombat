/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The source code file for the Barbarian class defines
**                  the constructor for a Barbarian character, setting
**                  the character's armor, strength, and type, as well as 
**                  the functions for a Barbarian's particular attack roll, 
**                  defense roll, and calculating the damage from an attack.
*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "Barbarian.hpp"

using std::cout;
using std::cin;
using std::endl;

/*Default constructor for a Barbarian Character, sets armor to 0, 
sets the starting strength to 12, and the type name to Barbarian. */
Barbarian::Barbarian()
{
    this->armor = 0;
    this->strength = 12;
    this->type = "Barbarian";
}

/*Function returns the result of rolling 2 6-sided dice,
the attack roll for a Barbarian character. */
int Barbarian::attackRoll()
{
    //Variables for the two dice being rolled
    int die1, die2;

    //Roll a random number on a 6-sided die for each die
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;

    //Calculate the attack roll by finding the sum of two 6-sided die rolls
    attack = die1 + die2;

    return attack;
}

/*Function returns the result of rolling 2 6-sided dice,
the defense roll for a Barbarian character. */
int Barbarian::defenseRoll()
{
    //Variables for the two dice being rolled
    int die1, die2;

    //Roll a random number on a 6-sided die for die1 and die2
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;

    //Calculate the defense roll by finding the sum of two 6-sided die rolls
    defense = die1 + die2;

    //Completes the statement printing the defense roll in GamePlay.cpp
    cout << " defends with a roll of " << defense << "." << endl;
    
    return defense;
}

/*Function calculates the damage done to a Barbarian in an 
attack, updates the strength of the Barbarian Character, and
completes the statement printing the damage done to the character 
in GamePlay.cpp. */
void Barbarian::takeDamage(int attackIn)
{
    /*Calculates the damage by subtracting the defense roll and
    armor value of the Barbarian from the opponent's attack roll, */
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

/*Function prints the characteristics of the Barbarian for
the player that has selected this character. */
void Barbarian::printChar()
{
    cout << "......................................." << endl;
    cout << "Think Conan or Hercules from the movies." << endl;
    cout << "Big sword, big muscles, bare torso." << endl;
    cout << endl;
    cout << "Special Ability:" << endl;
    cout << "Sadly, this brute has none." << endl;
    cout << "......................................." << endl;
    cout << endl;
    cout << endl;
}

//Destructor declared, but undefined
Barbarian::~Barbarian()
{

}