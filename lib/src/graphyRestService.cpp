#include "graphyRestService.h"

namespace graphyRestService
{
#ifdef _WIN32
	long _stdcall test()
#elif linux
	long test()
#endif
	{
		return 0;
	}
}
