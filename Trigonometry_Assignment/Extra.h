#include "Bio.h"

//Makes the program look like it's loading. Sorry.
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

//Makes the program go to main, so that a new task can be picked
void next()
{
    loading();
    printf("\nTask completed, please pick different number to perform a different task\n\n");
    main();
}
