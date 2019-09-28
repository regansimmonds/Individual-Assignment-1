#pragma once

#include "PluginSettings.h"
#include "SimpleClass.h"
#include <string>
using std::string;

#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API int SimpleFunction();
	PLUGIN_API void savingFunction(char* nameFile, float x, float y, float z); //function to save the location of the cube
#ifdef __cplusplus
}
#endif