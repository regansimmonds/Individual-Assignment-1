#include "Wrapper.h"
SimpleClass simpleClass;
PLUGIN_API int SimpleFunction()
{
	return simpleClass.SimpleFunction();
}

PLUGIN_API void savingFunction(char* nameFile, float x, float y, float z) //function to save the location of the cube
{
	return simpleClass.savingFunction(nameFile, x, y, z);
}
