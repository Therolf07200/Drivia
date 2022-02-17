#pragma once
#ifdef DRV_PLATFORM_WINDOWS
	#ifdef DRV_BUILD_DLL
		#define DRIVIA_API __declspec(dllexport)
	#else
		#define DRIVIA_API __declspec(dllimport)
	#endif // DRV_BUILD_DLL
#else
	#error Drivia only support Windows
#endif // DRV_PLATFORM_WINDOEWS
