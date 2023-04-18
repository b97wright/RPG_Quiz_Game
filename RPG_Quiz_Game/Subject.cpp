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
	int questionCount = 1;
	string inputQuestions;

	cout << "Add questions for current subject. Or input -1 to quit." << endl;

	while (inputQuestions != "-1")
	{ // TODO fix this, it is taking an empty string for some reason
		cin.clear();
		cout << questionCount << ") ";
		getline(cin, inputQuestions);
		Q_Guess.push_back(inputQuestions);
		cout << endl;
		questionCount++;
	}
	cout << endl;
}

void Subject::sRemoveQuestion()
{
	sPrintQuestions();
}

void Subject::sPrintQuestions()
{
	cout << "---------- List of Subjects ----------" << endl;
	for (int i = 0; i < Q_Guess.size(); i++)
	{
		cout << i << ") " << Q_Guess[i] << endl;
	}
	cout << endl;
}

void Subject::sEditQuestions()
{

}

bool Subject::isSubjectQuestionEmpty()
{
	return Q_Guess.empty();
}
