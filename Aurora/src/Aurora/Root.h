#pragma once

#ifdef AR_PLATFORM_WIN
	#ifdef AR_BUILD_DLL
		#define AR_API __declspec(dllexport)
	#else
		#define AR_API __declspec(dllimport)
	#endif
#else
	#error Aurora is only currently supported on Windows.
#endif
