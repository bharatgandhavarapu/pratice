/* Write a program to read the month in integer and print the month name. Print "Invalid month" message if invalid number is given */

#include<stdio.h>
int main(){
    int aMonthCode;
    printf("\n Enter a month code to print its equivalent month : ");
    scanf("%d",&aMonthCode);
    switch(aMonthCode){
        case 1 : printf("\n It's January\n");
                 break;
        case 2 : printf("\n It's February\n");
                 break;
        case 3 : printf("\n It's March\n");
                 break;
        case 4 : printf("\n It's April\n");
                 break;
        case 5 : printf("\n It's May\n");
                 break;
        case 6 : printf("\n It's June\n");
                 break;
        case 7 : printf("\n It's July\n");
                 break;
        case 8 : printf("\n It's August\n");
                 break;
        case 9 : printf("\n It's September\n");
                 break;
        case 10 : printf("\n It's October\n");
                 break;
        case 11 : printf("\n It's November\n");
                 break;
        case 12 : printf("\n It's December\n");
                 break;
        default: printf("\n Invalid Month code\n");
    }
    return 0;
}
