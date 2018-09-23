/* Write a program to check the given number for even or odd */

#include<stdio.h>
int main(){
    int aNumber;
    printf("\n Enter a Number to check whether it is even or odd : ");
    scanf("%d",&aNumber);
    if(aNumber%2==0)
        printf("\n %d is even number\n",aNumber);
    else
        printf("\n %d is odd number\n", aNumber);
    return 0;
}
