#include "stdafx.h"
#include "CLRExportCPlusApi.h"
#include "CLRCPlusCallCS.h"

extern "C" CLREXPORTCPLUSAPI char* testStaticMethod()
{
	CSTestClass^ CsTestInstance = gcnew CSTestClass();
	CSTestClassWrapper wrapper(CsTestInstance);

	char* StaticMethodStr =  wrapper.StaticMethod();
	return StaticMethodStr;
}
