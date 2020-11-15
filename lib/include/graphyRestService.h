#pragma once

#include <vector>

#ifdef _WIN32
#if defined(_MSC_VER) && !defined(graphyRestServiceLib_STATIC)
#ifdef graphyRestServiceLib_EXPORTS
#define GRAPHYRESTSERVICE_API __declspec(dllexport)
#else
#define GRAPHYRESTSERVICE_API __declspec(dllimport)
#endif
#else
#define GRAPHYRESTSERVICE_API
#endif
#endif

namespace graphyRestService
{
#ifdef _WIN32
    GRAPHYRESTSERVICE_API long _stdcall test();
#elif linux
	long test();
#endif
}
