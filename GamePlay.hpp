/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The header file for the GamePlay class, which
**                  declares private member variables to track whether the
**                  game is over and two pointers to Characters for player1 and
**                  player2, which will be of a derived class type
**                  (Vampire, BlueMen, Barbarian, Medusa, and Harry Potter).
**                  This file also declares member functions for running
**                  the operations of the fantasy combat game, including the
**                  menu for the user to select whether or not to play and 
**                  what characters to be, the gameLoop which goes through
**                  the components of each round of game play, and a
**                  function for clearing the screen. The default constructor
**                  and destructor are also declared in this file.
*************************************************************************/

#ifndef GAMEPLAY_HPP
#define GAMEPLAY_HPP

#include "Characters.hpp"

class GamePlay
{
    private:
        Characters * player1;   //Pointer to a Character type for player 1
        Characters * player2;   //Pointer to Character type for player 2
        bool gameOver;  //Variable to keep track of whether the game is over

    public:
        GamePlay(); //Default constructor
        void setgameOver(bool); //Function sets the variable gameOver
        bool getGameOver();     //Function returns whether the game is over
        int menu();      /*Function prints the menu for the user to play and 
                         select their characters. */   
        void gameLoop();    /*Function for controlling the flow of the game--
                            calling the attacks/defenses and updating the stats. */
        void clearScreen();  //Function to clear the screen
        ~GamePlay();        //Destructor to free up memory
};

#endif