/* Write a program to read in a series of positive and negative numbers and print each number with its square and its square root */

#include<math.h>
#include<stdio.h>
int main(){
    char aChar;
    int aNumber, square;
    double squareRoot;
    do{
        printf("\n Enter a number to check its square & square root : ");
        scanf("%d",&aNumber);

        square = aNumber*aNumber;
        squareRoot = sqrt((double)aNumber);

        printf("\n Number %d  \tSquare %d  \tSquare-Root %.2lf \n",aNumber,square,squareRoot);
        printf("\n Do you want to continue..(y/n) : ");
        scanf(" %c",&aChar);
    }while(aChar=='y' || aChar=='Y');
    return 0 ;
}
