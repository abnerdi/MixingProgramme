// CLRCplusWrapper.h

#pragma once
using namespace System;

class UManagedClass;

namespace CLRCplusWrapper {

	public ref class CPPClassWrapper
	{
		// TODO: �ڴ˴���Ӵ���ķ�����
	public:
		CPPClassWrapper();
		virtual ~CPPClassWrapper();

		void ShowClassName();

	private:
		UManagedClass* m_pUManagedClass;
	};
}
