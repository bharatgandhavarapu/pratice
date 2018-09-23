/* Write a program to print the product of two given numbers */

#include<stdio.h>
int main(){
    int firstNumber, secondNumber;
    printf("\n Enter two numbers with a space to multiply them : ");
    scanf("%d %d",&firstNumber,&secondNumber);
    printf("\n Multiplication of two numbers %d & %d is %ld\n",firstNumber,secondNumber,(firstNumber*secondNumber));
    return 0;
}
