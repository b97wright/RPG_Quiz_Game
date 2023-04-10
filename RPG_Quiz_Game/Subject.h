#pragma once
#include <vector>
#include <String>

using std::vector;
using std::string;

class Subject
{
public:
	Subject();
	Subject(string sn);
	~Subject();

	string getSubjectName();

private: 
	string Name;
	vector<string> Q_Guess;
	vector<string> A_Guess;
};

