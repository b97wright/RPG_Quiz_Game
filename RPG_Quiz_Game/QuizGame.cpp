#include "QuizGame.h"

QuizGame::QuizGame()
{
	mainIsPlaying = true;
	isInGame = true;
	isEdit = true;
	menuChoice = -1;
	editChoice = -1;
	editRemoveIndex = -1;
}

QuizGame::~QuizGame()
{
}

// ---------- Main Menu ----------
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
			editGame();
			break;
		}
		case 5:
		{
			howToPlay();
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
	while (isEdit)
	{
		cout << "---------- Edit Game ----------" << endl;
		cout << "Select a number in the edit menu to continue. " << endl;
		cout << "1) - Add a Subject -" << endl;
		cout << "2) - Remove a Subject -" << endl;
		cout << "3) - Print Subject -" << endl;
		cout << "4) - Return to Main Menu -" << endl;
		cin >> editChoice;
		cout << endl;

		switch (editChoice)
		{
		case 1:
		{
			addSubject();
			break;
		}
		case 2:
		{
			removeSubject();
			break;
		}
		case 3:
		{
			printSubject();
			break;
		}
		case 4:
		{
			cout << "Returning Back to Main Menu" << endl;
			isEdit = false;
			break;
		}
		default:
		{
			break;
		}
		}


	}
	isEdit = true;
	cout << endl;
}

void QuizGame::howToPlay()
{
	cout << "This will tell you the Rules of the Game!!!" << endl;
	cout << endl;
}

// ---------- Edit Menu ----------
void QuizGame::addSubject()
{
	cout << "---------- Add Question ----------" << endl;
	cout << "What subject woudl you like to be added: " << endl;
	cin >> subjectName;

	subjects.push_back(Subject(subjectName));
	cout << endl;
}

void QuizGame::removeSubject()
{
	cout << "---------- Remove Question ----------" << endl;
	if (subjects.empty() == true)
	{
		cout << "You have no subjects present!" << endl;;
	}
	else
	{
		printSubject();
		cout << "Which subject would you like to be removed, please select the index: ";
		cin >> editRemoveIndex;

		int currentMax = subjects.size();
		while (!(editRemoveIndex >= 0 && editRemoveIndex <= currentMax))
		{
			cout << "The number you selected was not apart of the index. \nPlease enter a number between 0 through " << subjects.size() - 1 << endl;
			cout << "Which subject would you like to be removed, please select the index: ";
		}

		subjects.erase(subjects.begin() + editRemoveIndex);
	}
	cout << endl;
}

void QuizGame::printSubject()
{
	cout << "---------- List of Subjects ----------" << endl;
	if (subjects.empty() == true)
	{
		cout << "There are no subjects to print!" << endl;
	}
	for (int i = 0; i < subjects.size(); i++)
	{
		cout << i << ") " << subjects[i].getSubjectName() << endl;
	}
	cout << endl;
}


