/* Write a program to print the Fibonacci series for the given number of terms */

#include<stdio.h>
int main(){
    int firstNumber=0, secondNumber=1, aNumber, temp1, temp2;
    printf("\n Enter a number to print the fibonacci series : ");
    scanf("%d",&aNumber);
    printf("\n Fibonacci series for the given number of terms is as follows : \n");
    printf("\n %d %d ",firstNumber,secondNumber);
    temp1 = aNumber;
    while(temp1!=0){
        temp2 = firstNumber+secondNumber;
        secondNumber = firstNumber;
        firstNumber = temp2;
        temp1--;
        printf("%d ",temp2);
    }
    printf("\n");
    return 0;
}
