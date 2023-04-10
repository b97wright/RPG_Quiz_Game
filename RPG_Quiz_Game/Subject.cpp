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
