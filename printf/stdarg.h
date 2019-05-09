#pragma
#ifndef __stdarg
#define __stdarg

typedef char* __va_list;
// #define __INTSIZEOF(n) ((sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1))
#define __va_arg(ptr, type)  (*(type*)((ptr += sizeof(type)) - sizeof(type)))
#define __va_start(ptr, last_arg) (ptr = (__va_list)&last_arg + sizeof(last_arg))
#define __va_end(ptr) (ptr = (__va_list)(0))

#endif