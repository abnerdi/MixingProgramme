#ifdef CLREXPORTCPLUSAPI_H_
	#define CLREXPORTCPLUSAPI _declspec(dllexport)
#else
	#define CLREXPORTCPLUSAPI _declspec(dllimport)
#endif

extern "C" CLREXPORTCPLUSAPI char* testStaticMethod();
// 


