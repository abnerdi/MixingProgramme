// CLRCPlusCallCS.h
#include <gcroot.h>

#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace CSDll;

public class CSTestClassWrapper
{

public:
	CSTestClassWrapper();
	CSTestClassWrapper(gcroot<CSTestClass^> CSClass);

	static char* StaticMethod();

	char* GetName();
	void SetName(char*);

	char* PublicMethod();
		

private:
	gcroot<CSTestClass^> m_WrapperClass;
};






 
