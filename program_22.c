/* Write a program to read in a series of numbers, each of which can contain decimal places.Print each number as it is read in.
Determine whether each number is +ve, -ve or zero, and print "positive", "negative" or "zero" next to it.
At the end print how many numbers are positive, negative and zero */

#include<stdio.h>
int main(){
    char aChar;
    double aNumber;
    do{
        printf("\n Enter a Number with decimal places : ");
        scanf("%lf",&aNumber);
        if(aNumber>0)
            printf("\n %.10lf is positive number\n",aNumber);
        else if(aNumber<0)
            printf("\n %.10lf is negative number\n", aNumber);
        else
            printf("\n %d is zero\n",aNumber);
        printf("\n Do you want to continue..(y/n) : ");
        scanf(" %c",&aChar);
    }while(aChar=='y'||aChar=='Y');
    return 0;
}
