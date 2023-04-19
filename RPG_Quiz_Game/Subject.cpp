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

	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (inputQuestions != "-1")
	{ // TODO fix this, it is taking an empty string for some reason
		cout << questionCount << ") ";
		getline(cin, inputQuestions);
		if (inputQuestions != "-1")
		{
			Q_Guess.push_back(inputQuestions);
		}
		cout << endl;
		questionCount++;
	}
	cout << endl;
}

void Subject::sRemoveQuestion()
{
	sPrintQuestions();
	cout << "---------- Remove Question ----------" << endl;
	if (Q_Guess.empty() == true)
	{
		cout << "You have no Questions in " << Name << endl;;
	}
	else
	{
		sPrintQuestions();
		cout << "Which subject would you like to be removed, please select the index, or -1 to go back: ";
		cin >> questionRemoveIndex;

		if (questionRemoveIndex == -1)
		{

		}
		else
		{
			int currentMax = Q_Guess.size();
			while (!(questionRemoveIndex >= 0 && questionRemoveIndex <= currentMax))
			{
				cout << "The number you selected was not apart of the index. \nPlease enter a number between 0 through " << Q_Guess.size() - 1 << endl;
				cout << "Which subject would you like to be removed, please select the index: ";
				cin >> questionRemoveIndex;

			}

			Q_Guess.erase(Q_Guess.begin() + questionRemoveIndex);
		}
	}
	cout << endl;
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
