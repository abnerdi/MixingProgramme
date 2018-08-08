#include "StdAfx.h"
#include "UManagedClass.h"
#include <ObjBase.h>
#include <stdio.h>


UManagedClass::UManagedClass(const char* name)
{
	//this->m_name = "UManagedClass!";
	::strcpy(this->m_name,name);
}


UManagedClass::UManagedClass()
{
	this->m_name = "UManagedClass!";
}	

UManagedClass::~UManagedClass(void)
{
}

const char* UManagedClass::staticStr("static field");


char* UManagedClass::getClassName()
{
	return this->m_name;
}

void UManagedClass::setClassId()
{
	m_guid = newGUID();
}

char* UManagedClass::newGUID()
{
	static char buf[64] = {0};
	GUID guid;
	if(S_OK == ::CoCreateGuid(&guid))
	{
		::_snprintf(buf, sizeof(buf)
			,"{%08X-%04X-%04x-%02X%02X-%02X%02X%02X%02X%02X%02X}"
			,guid.Data1
			,guid.Data2
			,guid.Data3
			,guid.Data4[0],guid.Data4[1]
		,guid.Data4[2],guid.Data4[3],guid.Data4[4],guid.Data4[5]
		,guid.Data4[6],guid.Data4[7]
		);
		return (char*)buf;
	}
	return NULL;
}