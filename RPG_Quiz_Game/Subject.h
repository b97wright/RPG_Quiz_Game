#pragma once
#include <iostream>
#include <vector>
#include <String>

using namespace std;
using std::vector;
using std::string;

class Subject
{
public:
	Subject();
	Subject(string sn);
	~Subject();

	string getSubjectName();
	int getQuestionSize();

	void sAddQuestion();
	void sRemoveQuestion();
	void sPrintQuestions();
	void sEditQuestions();

	bool isSubjectQuestionEmpty();

private: 
	string Name;
	vector<string> Q_Guess;
	vector<string> A_Guess;
};

