#include "Subject.h"

Subject::Subject()
{
	Name = "subject name";
}

Subject::Subject(string sn)
{
	Name = sn;
}

Subject::~Subject()
{

}

string Subject::getSubjectName()
{
	return Name;
}

int Subject::getQuestionSize()
{
	return Q_Guess.size();
}

void Subject::sAddQuestion()
{
	string inputQuestions;

	cout << "Add questions for current subject. Or input -1 to quit." << endl;

	while (inputQuestions == "-1")
	{
		int questionCount = 1;

		cout << questionCount << ") ";
		cin >> inputQuestions;
		Q_Guess.push_back(inputQuestions);
		cout << endl;
	}
}

void Subject::sRemoveQuestion()
{

}

void Subject::sPrintQuestions()
{
	cout << "---------- List of Subjects ----------" << endl;
	for (int i = 0; i < Q_Guess.size(); i++)
	{
		cout << i << ") " << Q_Guess[i] << endl;
	}
}
