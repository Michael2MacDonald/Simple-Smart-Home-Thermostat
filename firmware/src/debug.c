#include "errors.h"


#ifndef SYS_DEBUG
#define SYS_DEBUG 1
#endif

inline int printf_debug(const char *format, ...) {
#if SYS_DEBUG
	return printf(format, args);
#else
	return 0;
#endif
}