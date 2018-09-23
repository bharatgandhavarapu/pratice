/* Write a program to read in a series of numbers and print each number with its square and its cube */

#include<stdio.h>
int main(){
    char aChar;
    int aNumber, square, cube;
    do{
        printf("\n Enter a number to calculate it's square and cube : ");
        scanf("%d",&aNumber);

        square = aNumber*aNumber;
        cube=aNumber*aNumber*aNumber;

        printf("\n Number %d  \tSquare %d  \tCube %ld  \n",aNumber,square,cube);
        printf("\n Do you want to continue...(y/n) : ");
        scanf (" %c", &aChar);
    }while((aChar=='y')||(aChar=='Y'));
    return 0;
}
