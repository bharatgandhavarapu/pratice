/* Write a program to check the given number for Armstrong number */

#include<stdio.h>
int main(){
    int aNumber, armstrongNumber=0, temp1, temp2;
    printf("\n Enter a number to check whether it is Armstrong or not : ");
    scanf("%d",&aNumber);
    temp1 = aNumber;
    while(temp1!=0){
        temp2 = temp1%10;
        armstrongNumber += temp2*temp2*temp2;
        temp1 = temp1/10;
    }
    if(aNumber==armstrongNumber)
        printf("\n %d is a Armstrong Number\n",aNumber);
    else
        printf("\n %d is not a Armstrong Number\n",aNumber);
    return 0;
}
