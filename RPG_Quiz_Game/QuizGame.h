#pragma once
#include <iostream>
#include "Subject.h"

using namespace std;

class QuizGame
{
public:
	QuizGame();
	~QuizGame();

	// Main Menu
	void mainMenu();
	void playGame();
	void loadGame();
	void saveGame();
	void editGame();
	void howToPlay();

	// Edit Menu
	void addSubject();
	void removeSubject();
	void printSubject();

	// Edit Subject Menu

private:
	bool mainIsPlaying;
	bool isInGame;
	bool isEdit;
	int menuChoice;
	int editChoice;
	int editRemoveIndex;
	string subjectName;
	vector<Subject> subjects;
};

