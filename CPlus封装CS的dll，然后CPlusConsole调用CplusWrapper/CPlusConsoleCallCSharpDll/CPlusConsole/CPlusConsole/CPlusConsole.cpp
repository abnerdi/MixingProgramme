// CPlusConsole.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "..\CLRCPlusCallCS\CLRExportCPlusApi.h"


int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Hello World! \n";

	std::cout << testStaticMethod();
	system("pause");

	return 0;
}

