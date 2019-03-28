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

void Errornr(taskNumber)
{
    scanf("%d", &taskNumber);
    switch (taskNumber)
{
    case 1:
    opgave1();
    break;
    case 2:
    opgave2();
    default:
    printf("You have to input a number between 1 and 7\n");

}
}
