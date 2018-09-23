/*  Write a program to check the given number for palindrome number */

#include<stdio.h>
int main(){
    int aNumber, palindrome=0, temp1, temp2;
    printf("\n Enter a number to check whether its palindrome or not : ");
    scanf("%d",&aNumber);
    temp1 = aNumber;
    while(temp1!=0){
        temp2 = temp1%10;
        palindrome = temp2+palindrome*10;
        temp1 = temp1/10;
    }
    if(aNumber==palindrome)
        printf("\n %d is a number palindrome\n",aNumber);
    else
        printf("\n %d is not a number palindrome\n",aNumber);
    return 0;
}
