#pragma once
#include <iostream>

using namespace std;

class QuizGame
{
public:
	QuizGame();
	~QuizGame();

	void mainMenu();
	void playGame();
	void loadGame();
	void saveGame();
	void editGame();
	void howToPlay();

private:
	bool mainIsPlaying;
	bool isInGame;
	int menuChoice;
};

