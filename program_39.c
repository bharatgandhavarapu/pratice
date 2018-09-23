/* Write a program to print the sum of given numbers through command line */

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char*argv[]){
    int firstNumber, secondNumber, sum;
    printf("\n Sum of 2 numbers through command line are as follows :\n\n");
    firstNumber = atoi(argv[1]);
    secondNumber = atoi(argv[2]);
    sum = firstNumber + secondNumber;
    printf("\n Sum of two numbers %d & %d is %d\n",firstNumber,secondNumber,sum);
    return 0;
}
