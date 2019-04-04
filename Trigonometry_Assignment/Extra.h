#include "Bio.h"

void loading()
{
    printf("\nLoading");
    Sleep(1000);
    printf(".");
    Sleep(200);
    printf(".");
    Sleep(200);
    printf(".\n\n");
    Sleep(200);
}

void next()
{
    loading();
    printf("\nTask completed, please pick different number to perform a different task\n\n");
    main();
}
