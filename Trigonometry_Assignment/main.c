#include "Bio.h"
#include "Opgaverne.h"
#include "Extra.h"

int main()
{
int taskNumber;
printf("This is a program that does trigonometry.\n");
printf("To calculate the area of an arbitrary triangle, press 1 (opgave 1)\n\n");
scanf("%d", &taskNumber);

printf("\nYou chose the nummer %d\n", taskNumber);

loading();


switch (taskNumber)
{
    case 1:
    opgave1();
    break;
    case 2:
    opgave2();
    break;
    case 3:
    opgave3();
    break;
    case 4:
    opgave4();
    break;
    default:
    printf("You have to input a number between 1 and 7\n");
    loading();
    main();
}

}



