#include "Bio.h"
#include "Opgaverne.h"
#include "Extra.h"




int main()
{
int taskNumber;
printf("This is a program which does trigonometry.\n\n");
printf("To exit, press 0\n");
printf("To calculate the area of an arbitrary triangle, press 1 (opgave 1)\n");
printf("To calculate the 3 angles of an arbitrary triangle, press 2 (opgave 2)\n");
printf("To calculate the last side of an arbitrary triangle, press 3 (opgave 3)\n");
printf("To calculate an angel of an arbitrary triangle, press 4 (opgave 4)\n");
printf("To calculate all angles of a right-angled triangle, press 5 (opgave 5)\n");
printf("To calculate the area of an arbitrary triangle, press 6 (opgave 6)\n");
printf("To calculate the area of an arbitrary triangle, press 7 (opgave 7)\n\n");

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
    case 5:
    opgave5();
    break;
    case 0:
    printf("Thank you");
    break;
    default:
    printf("You have to input a number between 0 and 7\n");
    loading();
    main();
}

}



