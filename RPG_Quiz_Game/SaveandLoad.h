#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include "Subject.h"

using namespace std;

class SaveandLoad
{
public:
	SaveandLoad();
	~SaveandLoad();

	void saveGame(vector<Subject> subSave);
private:
	string subSaveName;
};

