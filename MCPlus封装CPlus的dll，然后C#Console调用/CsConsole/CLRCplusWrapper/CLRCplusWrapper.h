// CLRCplusWrapper.h

#pragma once
using namespace System;

class UManagedClass;

namespace CLRCplusWrapper {

	public ref class CPPClassWrapper
	{
		// TODO: 在此处添加此类的方法。
	public:
		CPPClassWrapper();
		virtual ~CPPClassWrapper();

		void ShowClassName();

	private:
		UManagedClass* m_pUManagedClass;
	};
}
