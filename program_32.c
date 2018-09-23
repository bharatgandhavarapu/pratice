/* Write a program to print the binary equivalent for the given decimal number */

#include<math.h>
#include<stdio.h>
int main(){
    int decimalNumber, binaryNumber=0, temp1, temp2, count=0;
    printf("\n Enter a decimal number : ");
    scanf("%d",&decimalNumber);
    temp1 = decimalNumber;
    while(temp1!=0){
        temp2 = temp1%2;
        binaryNumber += temp2*pow(10,count++);
        temp1 = temp1/2;
    }
    printf("\n Binary equivalent for %d decimal number is %d\n",decimalNumber,binaryNumber);
    return 0;
}
