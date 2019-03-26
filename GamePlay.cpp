/*************************************************************************
** Author:          Chelsea Hicks
** Date:            2/17/19
** Description:     The source code file for the GamePlay class, which
**                  defines functions for running the operations of the 
**                  fantasy combat game. This file defines member functions 
**                  the menu for the users to select whether or not to play 
**                  and their character choices, the gameLoop which goes through
**                  the components of each round of game play, and a
**                  function for clearing the screen. The default constructor
**                  sets the gameOver to false and the destructor is
**                  defined to free dynamically allocated memory.
*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

#include "GamePlay.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"

using std::cout;
using std::cin;
using std::endl;

//Default constructor for a game
GamePlay::GamePlay()
{
    gameOver = false;
}

//Function sets the variable for game over
void GamePlay::setgameOver(bool gameOverIn)
{
    gameOver = gameOverIn;
}

//Function returns whether the game is over or not
bool GamePlay::getGameOver()
{
    return gameOver;
}

//Function displays a menu for users to play the game and select characters
int GamePlay::menu()
{
    //Variable to hold the choice the user selects from the menu
	int choice;

    //Clear the screen and display the menu below
    clearScreen();

    cout << "************************************************" << endl;
	cout << "*          Welcome to Fantasy Combat!          *" << endl;
	cout << "*         Are you prepared for battle?         *" << endl;
    cout << "*                                              *" <<endl;
	cout << "*       1. Play the game                       *" << endl;
	cout << "*       2. Quit                                *" << endl;
    cout << "*                                              *" <<endl;
	cout << "*  Please enter 1 or 2 to make your selection  *" << endl;
    cout << "************************************************" << endl;
	cin >> std::setw(1) >> choice;

	/*Checks that the user makes a valid selection from the menu options
	and prompts them to input a valid selection of 1 or 2 until they
	do. This while loop will check for char/doubles values, integers greater
	than 2 or less than 1. The setw(1) will ensure only the first
	piece of user input is set to choice. */
	while (!cin.good() || cin.peek() != '\n' || choice > 2 || choice < 1)
	{
		cin.clear();
		cin.ignore(256, '\n');
        cout << endl;
        cout << "Don't be a fool! Enter a valid selection..." << endl;
		cout << endl;
		cout << "1. Play the game" << endl;
		cout << "2. Quit" << endl;
		cout << "Enter 1 or 2:" << endl;
		cin >> choice;
	}

    /*While loop to check the user's choice. If they select to play, the
    next menu prints for the players to select their characters and the 
    characters are created using a switch statement based on the
    selections of the players. */
	while (choice == 1)
	{	
        //Variables to hold the character selection of each player
        int player1Char, player2Char;

        clearScreen();
        cout << "************************************************" << endl;
        cout << "*       This is a battle to the death...       *" << endl; 
        cout << "*    You must choose your character wisely.    *" << endl;
        cout << "*                                              *" << endl;
		cout << "*      Player 1, select your character:        *" << endl;
	    cout << "*                                              *" << endl;
        cout << "*              1. Vampire                      *" << endl;
        cout << "*              2. Barbarian                    *" << endl;
        cout << "*              3. Blue Men                     *" << endl;
        cout << "*              4. Medusa                       *" << endl;
        cout << "*              5. Harry Potter                 *" << endl;
        cout << "*                                              *" << endl;
        cout << "************************************************" << endl;
        cin >> std::setw(1) >> player1Char;

        /*While loop to check that the user entered a valid choice and
        prompt them to enter a valid character choice until they do. */
        while (!cin.good() || cin.peek() != '\n' || player1Char > 5 || player1Char < 1)
	    {
		    cin.clear();
		    cin.ignore(256, '\n');
            cout << "This is no time for playing around!" << endl;
            cout << "Select your character: " << endl;
		    cout << endl;
		    cout << "1. Vampire" << endl;
		    cout << "2. Barbarian" << endl;
            cout << "3. Blue Men" << endl;
            cout << "4. Medusa" << endl;
            cout << "5. Harry Potter" << endl;
		    cout << "Select your character: " << endl;
		    cin >> player1Char;
	    }

        cout << "************************************************" << endl;
        cout << "*       This is a battle to the death...       *" << endl; 
        cout << "*    You must choose your character wisely.    *" << endl;
        cout << "*                                              *" << endl;
		cout << "*      Player 2, select your character:        *" << endl;
		cout << "*                                              *" << endl;
        cout << "*              1. Vampire                      *" << endl;
        cout << "*              2. Barbarian                    *" << endl;
        cout << "*              3. Blue Men                     *" << endl;
        cout << "*              4. Medusa                       *" << endl;
        cout << "*              5. Harry Potter                 *" << endl;
        cout << "*                                              *" << endl;
        cout << "************************************************" << endl;
        cin >> std::setw(1) >> player2Char;

        /*While loop to check that the user entered a valid choice and
        prompt them to enter a valid character choice until they do. */
        while (!cin.good() || cin.peek() != '\n' || player2Char > 5 || player2Char < 1)
	    {
		    cin.clear();
		    cin.ignore(256, '\n');
            cout << "This is no time for playing around!" << endl;
            cout << "Select your character: " << endl;
		    cout << endl;
		    cout << "1. Vampire" << endl;
		    cout << "2. Barbarian" << endl;
            cout << "3. Blue Men" << endl;
            cout << "4. Medusa" << endl;
            cout << "5. Harry Potter" << endl;
		    cout << "Select your character: " << endl;
		    cin >> player2Char;
	    }

        clearScreen();

        /*Switch statement to create a new Character type based off of the user choice
        for player 1. */
        switch (player1Char)
        {
            //Creates a new Vampire character and prints player choice
            case 1:
                player1 = new Vampire();
                cout << "Player 1: Vampire" << endl;
                break;

            //Creates a new Barbarian character and prints player choice
            case 2:
                player1 = new Barbarian();
                cout << "Player 1: Barbarian" << endl;
                break;
        
            //Creates a new BlueMen character and prints player choice
            case 3:
                player1 = new BlueMen();
                cout << "Player 1: Blue Men" << endl;
                break;
        
            //Creates a new Medusa character and prints player choice
            case 4:
                player1 = new Medusa();
                cout << "Player 1: Medusa" << endl;
                break;

            //Creates a new Harry Potter character and prints player choice
            case 5:
                player1 = new HarryPotter();
                cout << "Player 1: Harry Potter" << endl;
                break;
        }

        //Prints the characteristics of player1's character
        player1->printChar();
        cout << endl;

        /*Switch statement to create a new Character type based off of the user choice
        for player 1. */
        switch (player2Char)
        {
            //Creates a new Vampire character and prints player choice
            case 1:
                player2 = new Vampire();
                cout << "Player 2: Vampire" << endl;
                break;
        
            //Creates a new Barbarian character and prints player choice
            case 2:
                player2 = new Barbarian();
                cout << "Player 2: Barbarian" << endl;
                break;
        
            //Creates a new BlueMen character and prints player choice
            case 3:
                player2 = new BlueMen();
                cout << "Player 2: Blue Men" << endl;
                break;
        
            //Creates a new Medusa character and prints player choice
            case 4:
                player2 = new Medusa();
                cout << "Player 2: Medusa" << endl;
                break;

            //Creates a new Harry Potter character and prints player choice
            case 5:
                player2 = new HarryPotter();
                cout << "Player 2: Harry Potter" << endl;
                break;
        }

        //Prints the characteristics of player2's character
        player2->printChar();
		//cout << endl;
		
		//Waits for user to hit enter before clearing screen
		cout << "Hit enter for battle to commence..." << endl;
		cin.get();


		clearScreen();

		//Calls gameLoop() function to operate the actions of the game
		gameLoop();

		return 1;
	}

    /*While loop to check the user's choice. If the user selected to quit
    instead of a play a message will print and the menu will exit in main
    and the program will quit. */
	while (choice == 2)
	{
		cout << "Perhaps you'll be ready next time. Faretheewell." << endl;
		return 2;
	}
    return 0;
}

/*Function loops through the events of a game: player one rolls an attack, 
player two rolls a defense, damage is calculated, stats are printed to the 
screen to updated players and then player two rolls an attack, player one
rolls a defense, damage is calculated, and stats are printed again. This
continues until one player's strength reaches 0 or below, in which case
a player's character has died and a victor can be declared. */
void GamePlay::gameLoop()
{
    //Variables used to track the round number and attack number
    int roundNum = 1;
    int attackNum = 1;
	
    //While both players have strength greater than 0, the gameloop executes
    while (player1->getStrength() > 0 && player2->getStrength() > 0)
    {
        /*Prints for the players who is attacking, who is defending, and
        what the defendents armor and strength currently are. */
        cout << "***************************************************" << endl;
        cout << "                   ROUND NUMBER" << endl; 
        cout << "                      " << roundNum << endl; 
        cout << "Player 1: " << player1->getType() << " is ready to attack." << endl;
        cout << "Player 2: " << player2->getType() << " is ready to defend." << endl;
        cout << "	Armor: " << player2->getArmor() << endl;
        cout << "	Strength: " << player2->getStrength() << endl;
        cout << "***************************************************" << endl;

        //Prints the attack number
        cout << "Attack number " << attackNum << ":" << endl;
        cout << endl;

        /*Calls the attack roll for player1's character and stores it in the
        the attack variable to be used in calculating the damage. */    
        int attack = (player1->attackRoll());
        cout << "Player 1: " << player1->getType() << " attacks with a roll of ";
        cout << attack << "." << endl;

        //Calls the defense role for player2's character and prints it to screen. 
        cout << "Player 2: " << player2->getType(); 
        player2->defenseRoll();
        cout << endl;

        /*Calls the takeDamage function to calculate the damage to player2 and
        update their strength. */
        cout << "Damage to player 2 " << player2->getType();
        player2->takeDamage(attack);
        cout << endl;
        
        //Prints the updated strength of each character before player 2 attacks
        cout << "***************************************************" << endl;
        cout << "                    STATISTICS                  " << endl;
        cout << endl;
        cout << "Player 1: " << player1->getType() << endl;
        cout << "Strength: " << player1->getStrength() << endl;
        cout << endl;
        cout << "Player 2: " << player2->getType() << endl;
        cout << "Strength: " << player2->getStrength() << endl;
        cout << "***************************************************" << endl;

        //Checks is both players are still alive with a strength greater than 0
        if (player1->getStrength() > 0 && player2->getStrength() > 0)
        {
            attackNum++;
            cout << "Press enter to continue to the next attack." << endl;
            cin.get();

            /*Prints for the players who is attacking, who is defending, and
            what the defendents armor and strength currently are. */
            cout << "***************************************************" << endl;
            cout << "                   ROUND NUMBER" << endl; 
            cout << "                      " << roundNum << endl; 
            cout << endl;
            cout << "Player 2: " << player2->getType() << " is ready to attack." << endl;
            cout << "Player 1: " << player1->getType() << " is ready to defend." << endl;
            cout << "	Armor: " << player1->getArmor() << endl;
            cout << "	Strength: " << player1->getStrength() << endl;
            cout << "***************************************************" << endl;

            //Prints the attack number
            cout << "Attack number " << attackNum << ":" << endl;
            cout << endl;

            /*Calls the attack roll for player2's character and stores it in the
            the attack variable to be used in calculating the damage. */   
            attack = (player2->attackRoll());
            cout << "Player 2: " << player2->getType() << " attacks with a roll of ";
            cout << attack << "." << endl;

            //Calls the defense role for player1's character and prints it to screen.
            cout << "Player 1: " << player1->getType(); 
            player1->defenseRoll();
            cout << endl;

            /*Calls the takeDamage function to calculate the damage to player2 and
            update their strength. */
            cout << "Damage to player 1 " << player1->getType();
            player1->takeDamage(attack);
            cout << endl;
            
            //Prints the updated strength of each character before player 1 attacks
            cout << "***************************************************" << endl;
            cout << "                    STATISTICS                  " << endl;
            cout << endl;
            cout << "Player 1: " << player1->getType() << endl;
            cout << "Strength: " << player1->getStrength() << endl;
            cout << endl;
            cout << "Player 2: " << player2->getType() << endl;
            cout << "Strength: " << player2->getStrength() << endl;
            cout << "***************************************************" << endl;
            //Increments the round number and attack number
            roundNum++;
            attackNum++;

            //Prompts user to hit enter before the next attack
            cout << "Press enter to continue to the next attack." << endl;
            cin.get();
        	
		}
    }

    /*When the while loop is exited, at least one player has died, so the
    final results are printed to the screen. */
    cout << "***************************************************" << endl;
    cout << "                    FINAL RESULTS" << endl;
    cout << endl;

    /* If both players have a strength of zero or less, then inform the 
    players that both players died and there isn't a winner. */
    if (player1->getStrength() <= 0 && player2->getStrength() <= 0)
    {
        cout << "After a long day of battle, neither player succeeded in victory." << endl;
        cout << endl;
    }
    /*If player1 has a strength less than or equal to zero, inform the
    players that player1 has died and player2 has won. */
    else if (player1->getStrength() <= 0)
    {
        cout << "Sorry player 1, " << player1->getType() << " has died." << endl;
        cout << "Player 2, " << player2->getType() << " won this match." << endl;
        cout << endl;
    }
    /*If player2 has a strength less than or equal to zero, inform the
    players that player2 has died and player1 has won. */
    else if (player2->getStrength() <= 0)
    {
        cout << "Sorry player 2, " << player2->getType() << " has died." << endl;
        cout << "Player 1, " << player1->getType() << " won this match." << endl;
        cout << endl;
    }

	//Free dynamically allocated memory at the end of each game
	delete player1;
	delete player2;

    cout << "Press enter to continue." << endl;
    cin.get();

}

//Function prints 100 newlines to clear the visible screen
void GamePlay::clearScreen()
{
	std::cout << std::string(100, '\n');
}

//Destructor declared but left undefined
GamePlay::~GamePlay()
{

}
