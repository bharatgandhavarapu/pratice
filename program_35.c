/* Write a program to find out the factorial of the given number */

#include<stdio.h>
int main(){
    int temp, aNumber;
    long long int factorial=1;
    printf("\n Enter a number to calculate the factorial : ");
    scanf("%d",&aNumber);
    temp = aNumber;
    while(temp>=1){
        factorial = factorial * temp;
        temp--;
    }
    printf("\n Factorial of %d number is %lld\n",aNumber,factorial);
    return 0;
}
