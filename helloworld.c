#include <stdio.h>
#include "helloworld.h"

extern void mylib_function();


int main()
{
    printf("Hello World");
    mylib_function();
    return 0;
}
