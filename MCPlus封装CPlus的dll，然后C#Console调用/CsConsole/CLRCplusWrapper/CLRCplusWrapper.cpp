// 这是主 DLL 文件。

#include "stdafx.h"
#include "..\CplusDll\UManagedClass.h"
#include "CLRCplusWrapper.h"

using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

namespace CLRCplusWrapper {
	CPPClassWrapper::CPPClassWrapper()
		:m_pUManagedClass(NULL)
	{
		this->m_pUManagedClass = new UManagedClass();
	}

	CPPClassWrapper::~CPPClassWrapper()
	{
		delete this->m_pUManagedClass;
		this->m_pUManagedClass = NULL;
	}


	void CPPClassWrapper::ShowClassName()
	{
		char* className = this->m_pUManagedClass->getClassName();

		String^ strName = Marshal::PtrToStringAnsi(static_cast<IntPtr>(className));

		//delete[] className;
		//className = NULL;

		MessageBox::Show(strName);
	}
}
