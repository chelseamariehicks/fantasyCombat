/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The source code file for the BlueMen class defines
**                  the constructor for a BlueMen character, setting
**                  the character's armor, strength, and type, as well as 
**                  the functions for a Blue Men's particular attack roll, 
**                  defense roll, and calculating the damage from an attack.
*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "BlueMen.hpp"

using std::cout;
using std::cin;
using std::endl;

/*Default constructor for a Blue Men Character sets the armor to 3,
sets the starting strength to 12, and the type to the character name. */
BlueMen::BlueMen()
{
    this->armor = 3;
    this->strength = 12;
    this->type = "Blue Men";
}

/*Function returns the result of rolling 2 10-sided dice,
the attack roll for a Blue Men Character. */
int BlueMen::attackRoll()
{
    //Variables for the two dice being rolled
    int die1, die2;

    //Roll a random number on a 10-sided die for each die
    die1 = rand() % 10 + 1;
    die2 = rand() % 10 + 1;

    //Calculate the attack roll by finding the sum of two 10-sided die rolls
    attack = die1 + die2;

    return attack;
}   

/*Function returns the result of rolling up to 3 6-sided dice, depending
on the remaining strength of the Blue Men, for the defense roll. */        
int BlueMen::defenseRoll()
{
    //Variables for the potentially three dice being rolled
    int die1, die2, die3;

    /*For every 4 points of damage, the Blue Men lose a defense die.
    These if statements roll a number of dice depending on the 
    strength of the Blue Men character. */
    if (this->strength > 8)
    {
        //Roll a random number on three different 6-sided dice
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        die3 = rand() % 6 + 1;

        //The sum of the three dice rolls equals the defense roll
        defense = die1 + die2 + die3;
    }
    //Roll 2 6-sided dice if strength is between 5-8
    else if (this->strength > 4 && this->strength <= 8)
    {
        //Roll a random number on two different 6-sided dice
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;

        //The sum of the two dice rolls equals the defense roll
        defense = die1 + die2; 
    }
    //Roll one 6-sided die if strength is 4 or less
    else if (this->strength <= 4)
    {
        //Roll a random number on a 6-sided die
        die1 = rand() % 6 + 1;

        //The roll of one die equals the defense roll
        defense = die1;
    }
    //Completes the statement printing the defense roll in GamePlay.cpp
    cout << " defends with a roll of " << defense << "." << endl;
    
    return defense;
}

/*Function calculates the damage done to the Blue Men in an 
attack and updates the strength of the Blue Men Character. */
void BlueMen::takeDamage(int attackIn)
{
    /*Calculates the damage by subtracting the defense roll and
    armor value of the Blue Men from the opponent's attack roll, */
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

/*Function prints the characteristics of the Blue Men for
the player that has selected this character. */
void BlueMen::printChar()
{
    cout << "......................................." << endl;
    cout << "They are small, 6 inch tall, but fast" << endl; 
    cout << "and tough. They are hard to hit so they " << endl;
    cout << "can take some damage. They can also " << endl;
    cout << "do a LOT of damage when they crawl " << endl;
    cout << "inside enemies’ armor or clothing." << endl;
    cout << endl;
    cout << "Special Ability:" << endl;
    cout << "Mob: Blue Men are actually a swarm of " << endl;
    cout << "small individuals. For every 4 points of " << endl;
    cout << "damage, they lose one defense die." << endl;
    cout << "......................................." << endl;
    cout << endl;
    cout << endl;

}  

//Destructor
BlueMen::~BlueMen()
{

}
