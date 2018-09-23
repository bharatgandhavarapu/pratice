/* Write a program to print the average of the three given numbers */

#include<stdio.h>
int main(){
    float average;
    int firstNumber, secondNumber, thirdNumber;
    printf("\n Enter three numbers with spaces in between to check average : ");
    scanf("%d %d %d",&firstNumber,&secondNumber,&thirdNumber);
    average = (firstNumber + secondNumber + thirdNumber);
    average = average/3.0;
    printf("\n Average of three numbers %d %d & %d is %.2f\n",firstNumber,secondNumber,thirdNumber,average);
    return 0;
}
