#include "StdAfx.h"
#include "UManagedClass.h"


UManagedClass::UManagedClass(void)
{
	this->m_name = "UManagedClass!";
}


UManagedClass::~UManagedClass(void)
{
}

const std::string UManagedClass::staticStr("static field");


std::string UManagedClass::getClassName()
{
	return this->m_name;
}