/* Write a program to display the the sum of Fibonacci numbers for the given number of terms */

#include<stdio.h>
int sumOfFibonacci(int);
int main(){
    int fibonacci,number;
    printf("\n Enter a number to calculate sum of fibonacci series of Nth term :  ");
    scanf("%d",&number);
    fibonacci = sumOfFibonacci(number);
    printf("\n Sum of fibonacci series upto given number is %d\n",fibonacci);
    return 0;
}
int sumOfFibonacci(int number){
    int sum=0;
    if(number==0)
        return 0;
    else if(number==1)
        return 1;
    else
        return (sumOfFibonacci(number-1)+sumOfFibonacci(number-2)+1);
}
