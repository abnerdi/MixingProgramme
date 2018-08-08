#pragma once
#ifndef _UMANAGEDCLASS_H_
#define _UMANAGEDCLASS_H_
	#ifdef CPPEXPORTCLASS
		#define DLL_CLASS_EXPORT __declspec(dllexport)
	#else
		#define DLL_CLASS_EXPORT __declspec(dllimport)
	#endif

#include <string>

class DLL_CLASS_EXPORT UManagedClass
{
public:
	UManagedClass(void);
	UManagedClass(const char*);
	~UManagedClass(void);

	char* getClassName();
	void setClassId();

private:
	char* m_name;
	char* m_guid;
	static const char* staticStr;

private:
	char* newGUID();
};

#undef DLL_CLASS_EXPORT
#endif

