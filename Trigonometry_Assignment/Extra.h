#include "Bio.h"

void loading()
{
    printf("\nLoading");
    Sleep(1000);
    printf(".");
    Sleep(200);
    printf(".\n\n");
    Sleep(200);
}

void next()
{
    loading();
    printf("\nThe task is over, please pick different nummer\n\n");
    main();
}
