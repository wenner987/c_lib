#ifndef __printf

#include "stdarg.h"

int __printf(const char* formate, ...){
    __va_list arg_ptr;
    __va_start(arg_ptr, formate);
    char* cur = (char*)formate;
    while(*cur != '\0'){
        if(*cur == '%'){
            cur++; 
            if(*cur == 'd'){
                int arg = __va_arg(arg_ptr, int);
                printf ("%d", arg);
            }
            else if(*cur == 'c'){
                char arg = __va_arg(arg_ptr, char);
            }
        }
        else {
            printf("%c", *cur);
        }
        cur++;
    }
}

#endif