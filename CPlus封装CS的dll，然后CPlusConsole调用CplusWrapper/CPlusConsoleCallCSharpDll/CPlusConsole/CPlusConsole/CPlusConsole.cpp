// CPlusConsole.cpp : �������̨Ӧ�ó������ڵ㡣
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

