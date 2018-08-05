// 这是主 DLL 文件。

#include "stdafx.h"

#include "CLRCPlusCallCS.h"


CSTestClassWrapper::CSTestClassWrapper()
{

}

CSTestClassWrapper::CSTestClassWrapper(gcroot<CSTestClass^> cSClass)
{
	m_WrapperClass = cSClass;
}

char*  CSTestClassWrapper::StaticMethod()
{
	String^ staticStr = CSTestClass::StaticMethod();
	IntPtr pStrPtr = Marshal::StringToHGlobalAnsi(staticStr);
	char* pStr = static_cast<char*>(pStrPtr.ToPointer());
	return pStr;
}


char* CSTestClassWrapper::GetName()
{
	String^ Str = m_WrapperClass->Name;
	IntPtr pStrPtr = Marshal::StringToHGlobalAnsi(Str);
	char* pStr = static_cast<char*>(pStrPtr.ToPointer());
	return pStr;	
}

void CSTestClassWrapper::SetName(char* name)
{
	String^ Str = gcnew String(name);
	m_WrapperClass->Name = Str;	
}

char* CSTestClassWrapper::PublicMethod()
{
	String^ Str = m_WrapperClass->PublicMethod();
	IntPtr pStrPtr = Marshal::StringToHGlobalAnsi(Str);
	char* pStr = static_cast<char*>(pStrPtr.ToPointer());
	return pStr;
}


