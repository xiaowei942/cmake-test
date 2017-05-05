#ifndef __LIBHELLO_H__
#define __LIBHELLO_H__

#if defined _WIN32
	#if LIB_EXPORT_BUILD
		#define LIBHELLO_API __declspec(dllexport)
	#else
		#define LIBHELLO_API __declspec(dllimport)
	#endif
#else
	#define LIBHELLO_API
#endif

LIBHELLO_API void printHello();

#endif
