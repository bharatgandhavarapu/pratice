/* Write a program to print the hexadecimal equivalent for the given decimal number */

#include<stdio.h>
int main(){
    char hexaDecimalResult[20];
    int hexaDecimalNumber=0, decimalNumber, temp1, temp2, count=0, index=0, loop;
    printf("\n Enter a decimal number : ");
    scanf("%d",&decimalNumber);
    temp1 = decimalNumber;
    while(temp1!=0){
        temp2 = temp1%16;
        switch(temp2){
            case 10 : hexaDecimalResult[index++]='A';
                      break;
            case 11 : hexaDecimalResult[index++]='B';
                      break;
            case 12 : hexaDecimalResult[index++]='C';
                      break;
            case 13 : hexaDecimalResult[index++]='D';
                      break;
            case 14 : hexaDecimalResult[index++]='E';
                      break;
            case 15 : hexaDecimalResult[index++]='F';
                      break;
            default : hexaDecimalResult[index++]=((char)temp2+'0');
        }
        //hexaDecimalNumber += temp2*pow(10,count++);
        temp1 = temp1/16;
    }
    printf("\n Hexadecimal equivalent for %d decimal number is : ",decimalNumber);
    loop=index-1;
    while(loop>=0){
        printf("%c",hexaDecimalResult[loop]);
        loop--;
    }
    printf("\n");
    return 0;
}
