#include "./main.h"

int main()
{
    // Table of pointers to the different functions.
    int (*functions[])(void) = {NULL, mainDay1};

    for (size_t i = 1; i < sizeof(functions)/sizeof(functions[1]); i++)
    {
        functions[i]();
    }
    
    return EXIT_SUCCESS;
}
