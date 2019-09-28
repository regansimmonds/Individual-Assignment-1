#pragma once

#include "PluginSettings.h"
#include <string>
#include <fstream>
using std::string;
using std::ifstream;
using std::ofstream;
using std::ios;

class PLUGIN_API SimpleClass
{
public:
	int SimpleFunction();
	void savingFunction(char* nameFile, float x, float y, float z); //function to save the location of the cube 
};