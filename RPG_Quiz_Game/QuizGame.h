#pragma once
#include <iostream>
#include "Subject.h"
#include "SaveandLoad.h"

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
	void editSubjectMenu(int index);
	void addQuestion(int index);
	void removeQuestion(int index);
	void printQuestion(int index);
	void editQuestion(int index);

private:
	bool mainIsPlaying;
	bool isInGame;
	bool isEdit;
	bool isEditSubject;
	int menuChoice;
	int editChoice;
	int editSubjectChoice;
	int editRemoveIndex;
	int editSubjectIndex;
	string subjectName;
	vector<Subject> subjects;
	SaveandLoad saveandload;
};

