#include "QuizGame.h"

QuizGame::QuizGame()
{
	mainIsPlaying = true;
	isInGame = true;
	menuChoice = -1;
}

QuizGame::~QuizGame()
{
}

void QuizGame::mainMenu()
{
	while (mainIsPlaying)
	{
		cout << "---------- Main Menu ----------" << endl;
		cout << "Select a number in the menu to continue. " << endl;
		cout << "1) - Play Game -" << endl;
		cout << "2) - Load Game -" << endl;
		cout << "3) - Save Game -" << endl;
		cout << "4) - Edit Game -" << endl;
		cout << "5) - How To Play -" << endl;
		cout << "6) - Quit -" << endl;
		cin >> menuChoice;
		cout << endl;


		switch (menuChoice)
		{
		case 1:
		{
			break;
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			break;
		}
		case 5:
		{
			break;
		}

		case 6:
		{
			cout << "Thank you for playing!!!" << endl;
			cout << "Have a fun day!!!" << endl;
			cout << "Good luck with your Studies!!!" << endl;
			mainIsPlaying = false;
			break;
		}
		default:
		{
			break;
		}
		}

	}
}

void QuizGame::playGame()
{
	cout << "\nSelect a Subject that you would like to be tested in: " << endl;
}

void QuizGame::loadGame()
{
	cout << "Please wait while we load the game from your last save data!" << endl;
}

void QuizGame::saveGame()
{
	cout << "Please wait while we save the game to your local save location!" << endl;
}

void QuizGame::editGame()
{
}

void QuizGame::howToPlay()
{
}
