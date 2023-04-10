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
	void editSubject();

	// Edit Subject Menu
	void addQuestion();

private:
	bool mainIsPlaying;
	bool isInGame;
	bool isEdit;
	bool isEditSubject;
	int menuChoice;
	int editChoice;
	int editRemoveIndex;
	int editSubjectIndex;
	string subjectName;
	vector<Subject> subjects;
};

