/* Write a program to check the given number for the divisibility of 3 & 4 */

#include<stdio.h>
int main(){
    int aNumber;
    printf("\n Enter a Number to check if it is divisible by both 3 & 4 : ");
    scanf("%d",&aNumber);
    if((aNumber%3==0)&&(aNumber%4==0))
        printf("\n %d number is divisible by both 3 & 4\n",aNumber);
    else
        printf("\n %d number is not divisible by both 3 & 4\n",aNumber);
    return 0;
}
