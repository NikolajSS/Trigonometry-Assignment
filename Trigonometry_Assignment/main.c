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

do {
switch (taskNumber)
{
    case 1:
    opgave1();
    break;
    case 2:
    opgave2();
    default:
    printf("You have to input a number between 1 and 7\n");
    scanf("%d", &taskNumber);
    loading();

}
}while(taskNumber != 1||2||3||4||5||6||7);
}



