#ifndef PRE_C
#include <stdio.h>
#endif

#include "sizeof.h"

int main(void) {
    int a;
    printf("%d\n", (int)__sizeof(int));
    return 0;
}
