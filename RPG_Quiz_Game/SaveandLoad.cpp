#include "SaveandLoad.h"

SaveandLoad::SaveandLoad()
{
	subSaveName = "";
}

SaveandLoad::~SaveandLoad()
{
}

void SaveandLoad::saveGame(vector<Subject> subSave)
{
	// cout << "---------- List of Subjects ----------" << endl;
	if (subSave.empty() == true)
	{
		cout << "There are no subjects to save!" << endl;
	}
	for (int i = 0; i < subSave.size(); i++)
	{
		// make the save area
		string myFile_Path = "F:\\Documents\\Visual Studio Community Code\\RPG_Quiz_Game\\RPG_Quiz_Game\\SaveData\\" + subSave[i].getSubjectName() + ".txt";
		ofstream myFile(myFile_Path, ofstream::trunc);


		if (myFile.is_open())
		{
			for (int j = 0; j < subSave[i].getQuestionSize(); j++)
			{
				string inputIntoFile;
				inputIntoFile = subSave[i].returnQuestion(j);
				myFile << inputIntoFile << endl;
			}
			myFile << "END OF FILE!";
		}
		else
		{
			cout << "Could Not Open File!!!";
		}
	}
	cout << endl;
}
