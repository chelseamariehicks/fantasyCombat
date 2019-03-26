/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The main file for executing the fantasy combat game
**                  menu and running through the gameplay. 
*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

#include "GamePlay.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //Creates an object of GamePlay
    GamePlay game;

    /*While loop calls the menu function, which will follow by going through
    the gameLoop if the user selects to play. The user will be prompted with
    the menu after every game unless they decide to quit, in which case the 
    while loop will be exited. */
    while (game.menu() != 2)
	{
		cout << endl;
	}

    return 0;
}