/* Write a program to print the decimal equivalent for the given binary number */

#include<stdio.h>
int main(){
    int decimalNumber=0, binaryNumber, temp1, temp2, count=0;
    printf("\n Enter a binary number(0/1) : ");
    scanf("%d",&binaryNumber);
    temp1 = binaryNumber;
    while(temp1!=0){
        temp2 = temp1%10;
        decimalNumber += temp2*pow(2,count++);
        temp1 = temp1/10;
    }
    printf("\n Decimal equivalent of %d binary number is : %d\n",binaryNumber,decimalNumber);
    return 0;
}
