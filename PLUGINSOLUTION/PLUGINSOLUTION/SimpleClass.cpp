#include "SimpleClass.h"
int SimpleClass::SimpleFunction()
{
	return 1;
}

void SimpleClass::savingFunction(char* nameFile, float x, float y, float z)
{
	ofstream name(nameFile, ios::out); //opening the file

	if (name.is_open()) //if the file is open, print the x,y,z coordinates and then close the file
	{
		name << x << "\n" << y << "\n" << z;

		name.close();
	}

}
