/* Write a program to print all palindrome numbers between 100 and 200 */

#include<stdio.h>
int main(){
    int startNumber=100, range=200, palindromeNumber=0, temp1, temp2;
    printf("\n Palindrome numbers from 100 to 200 are as follows : \n\n");
    while(startNumber<=range){
        temp1 = startNumber;
        while(temp1!=0){
            temp2 = temp1%10;
            palindromeNumber = temp2+palindromeNumber*10;
            temp1 = temp1/10;
        }
        if(startNumber==palindromeNumber)
            printf(" %3d ",startNumber);
        startNumber++;
        palindromeNumber=0;
    }
    printf("\n");
    return 0;
}
