/* Write a program to find out the given number for Fibonacci number using recursion logic */;;

#include<stdio.h>
int calcFibonacci(int);
int main(){
    int fibonacci,number;
    printf("\n Enter a number to calculate fibonacci of Nth term :  ");
    scanf("%d",&number);
    fibonacci = calcFibonacci(number);
    printf("\n Fibonacci of given number is %d\n",fibonacci);
    return 0;
}
int calcFibonacci(int number){
    if(number==0)
        return 0;
    else if(number==1)
        return 1;
    else
        return (calcFibonacci(number-1)+calcFibonacci(number-2));
}
