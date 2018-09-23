/* Write a program to find out the factorial of a given number using recursion */

#include<stdio.h>
long int calcFactorial(int);
int main(){
    int aNumber;
    long long int result;
    printf("\n Enter a number to calculate factorial of given number : ");
    scanf("%d",&aNumber);
    result = calcFactorial(aNumber);
    printf("\n Factorial of %d number is %lld\n",aNumber,result);
    return 0;
}
long int calcFactorial(int fact){
    if(fact<=1)
        return 1;
    else
        return (fact*calcFactorial(fact-1));

}
