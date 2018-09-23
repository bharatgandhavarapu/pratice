/* Write a program to check the given number for prime number */

#include<stdio.h>
int main(){
    int aNumber, loop=2, count=0;
    printf("\n Enter a number to check whether it is prime or not : ");
    scanf("%d",&aNumber);
    while(loop<=aNumber){
        if(aNumber%loop==0){
            count++;
        }
        loop++;
    }
    if(count==1)
        printf("\n %d is a prime number\n",aNumber);
    else
        printf("\n %d is not a prime number\n",aNumber);

    return 0;
}
