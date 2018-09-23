/* Write a program to check the given number for Fibonacci number */

#include<stdio.h>
int main(){
    int firstNumber=0, secondNumber=1, aNumber, temp1, temp2;
    printf("\n Enter a number to check value of fibonacci value : ");
    scanf("%d",&aNumber);
    temp1 = aNumber;
    while(temp1!=0){
        temp2 = firstNumber+secondNumber;
        secondNumber = firstNumber;
        firstNumber = temp2;
        temp1--;
    }
    printf("\n Fibonacci series of %d number is : %d\n",aNumber,temp2);
    return 0;
}
