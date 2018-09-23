/* Write a program to print the table for the given number from 1 to 20 */

#include<stdio.h>
int main(){
    int aNumber,loop=1,range=20;
    printf("\n Enter table number : ");
    scanf("%d",&aNumber);
    printf("\n Table for %d is as follows : \n\n",aNumber);
    while(loop<=range){
        printf(" %4d  X %4d : %5d\n",aNumber,loop++,(aNumber*loop));
    }
    return 0;
}
