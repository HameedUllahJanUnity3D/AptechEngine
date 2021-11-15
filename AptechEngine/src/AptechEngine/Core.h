#pragma once
#ifdef AE_PLATFORM_WINDOWS
	#ifdef AE_BUILD_DLL
		#define APTECHENGINE_API __declspec(dllexport)
	#else
		#define APTECHENGINE_API __declspec(dllimport)
	#endif // AE_BUILD_DLL
#else
	#error AptechEngine only support Windows!
#endif // AE_PLATFORM_WINDOWS
