/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The source code file for the HarryPotter class defines
**                  the constructor for a Harry Pottter character as well as 
**                  the functions for attack, taking damage, and defense.
**                  This file also includes getter and setter functions
**                  for the Harry Potter life counter, which tracks
**                  if HP is on his second life, using his Hogwarts
**                  special ability.
*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "HarryPotter.hpp"

using std::cout;
using std::cin;
using std::endl;

/*Default constructor for a Harry Potter Character sets armor to 0,
starting strength to 10, life counter to 1, and the character type name
to "Harry Potter". */ 
HarryPotter::HarryPotter()
{
    this->armor = 0;
    this->strength = 10;
    this->type = "Harry Potter";
    this->lifeCounter = 1;
}

/*Function sets the life counter for a Harry Potter Character, which
will decrement once he dies once in the takeDamge function. */
void HarryPotter::setLifeCounter(int lifeCounterIn)
{
    this->lifeCounter = lifeCounterIn;
}

//Function returns the value of a Harry Potter Character's life counter
int HarryPotter::getLifeCounter()
{
    return lifeCounter;
}

/*Function returns the result of rolling 2 6-sided dice,
the attack roll for a Harry Potter Character. */
int HarryPotter::attackRoll()
{
    //Variables for the two dice being rolled
    int die1, die2;

    //Roll a random number on a 6-sided die for each die
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;

    //Calculate the attack roll, the sum of two 6-sided die rolls
    attack = die1 + die2;

    return attack;
}

/*Function returns the result of rolling 2 6-sided dice,
the defense roll for a Harry Potter Character. */
int HarryPotter::defenseRoll()
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

/*Function calculates the damage done to Harry Potter in an 
attack and updates the strength of the Harry Potter Character.
This function also accounts for HP special ability, Hogwarts,
in which he has a second life and strength of 20.*/
void HarryPotter::takeDamage(int attackIn)
{
    /*Calculates the damage by subtracting the defense roll and
    armor value of Harry Potter from the opponent's attack roll, */
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

    /*If statement checks if the HP character is dying for the first time by 
    checking if the character's strength is equal to or less than zero and the 
    life counter is equal to 1. If true, the HP character's strength is reset
    to 20, the life counter is decremented so he dies the next time his strength
    reaches 0 or less, and a statement is printed to inform the players that
    this special ability has been utilized. */
    if (this->strength <= 0 && this->lifeCounter == 1)
    {
        //Resets strength to 20
        this->strength = 20;

        //Life counter decremented to ensure this loop isn't entered again
        this->lifeCounter--;
        
        //Informs user that the special ability of HP has been used
        cout << endl;
        cout << "But wait...." << endl;
        cout << "Harry Potter used the power of Hogwarts to thwart" << endl;
        cout << "death! His strength has been restored and" << endl;
        cout << "elevated to 20!" << endl;

        //this->damage = 0;
    }

}

/*Function prints the characteristics of Harry Potter for
the player that has selected this character. */
void HarryPotter::printChar()
{
    cout << "......................................." << endl;
    cout << "Harry Potter is a wizard." << endl;
    cout << endl;
    cout << "Special Ability:" << endl;
    cout << "Hogwarts: If Harry Potter's strength" << endl;
    cout << "reaches 0 or below, he immediately" << endl;
    cout << "recovers and his total strength" << endl;
    cout << "becomes 20. If he were to die again," << endl;
    cout << "then he’s dead." << endl;
    cout << "......................................." << endl;
    cout << endl;
    cout << endl;
}

//Destructor declared, but not defined
HarryPotter::~HarryPotter()
{

}