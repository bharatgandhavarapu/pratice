/* Write a program to reverse the given number */

#include<stdio.h>
int main(){
    int aNumber, reverse=0, temp1, temp2;
    printf("\n Enter a number to reverse it : ");
    scanf("%d",&aNumber);
    temp1 = aNumber;
    while(temp1!=0){
        temp2 = temp1%10;
        reverse = temp2+reverse*10;
        temp1 /= 10;
    }
    printf("\n Reverse of %d is : %d\n",aNumber,reverse);
    return 0;
}
