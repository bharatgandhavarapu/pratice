/* Write a program to read series of numbers and print all prime, Armstrong and palindrome numbers */

#include<stdio.h>
void primeNumber(int);
void armstrongNumber(int);
void palindromeNumber(int);
int main(){
    char aChar;
    int aNumber;
    do{
        printf("\n Enter a number range to print all prime, armstrong & palindrome : ");
        scanf("%d",&aNumber);
        primeNumber(aNumber);
        armstrongNumber(aNumber);
        palindromeNumber(aNumber);
        printf("\n Do you want to continue..(y/n) : ");
        scanf(" %c",&aChar);
    }while(aChar=='y'||aChar=='y');
    return 0;
}

void primeNumber(int number){
    int count=0, loop=2, temp, startNumber=1 ,range;
    range = number;
    printf("\n Prime number for given range is as follows : \n\n");

    while(startNumber<=range){
        loop=2;
        count=0;
        temp = startNumber;
        while(loop<=temp/2){
            if(temp%loop==0){
                count++;
                break;
            }
            loop++;
        }
        if(count==0 && startNumber!=1){
            printf(" %3d ",startNumber);
        }
        startNumber++;
    }
    printf("\n");
}

void armstrongNumber(int number){
    int temp1=0, temp2=0, startNumber=1 ,range, armstrongNumber=0;
    range = number;
    printf("\n Armstrong for given range is as follows : \n\n");
    while(startNumber<=range){
        temp1 = startNumber;
        while(temp1!=0){
            temp2 = temp1%10;
            armstrongNumber += temp2*temp2*temp2;
            temp1 = temp1/10;
        }
        if(startNumber==armstrongNumber){
            printf(" %4d ",startNumber);
        }
        startNumber++;
        armstrongNumber=0;
    }
    printf("\n");
}

void palindromeNumber(int number){
    int temp1=0, temp2=0, startNumber=1 ,range, palindromeNumber=0;
    range = number;
    printf("\n Palindrome for given range is as follows : \n\n");
    while(startNumber<=range){
        temp1 = startNumber;
        while(temp1!=0){
            temp2 = temp1%10;
            palindromeNumber = palindromeNumber*10+temp2;
            temp1 = temp1/10;
        }
        if(startNumber==palindromeNumber){
            printf(" %3d ",startNumber);
        }
        startNumber++;
        palindromeNumber=0;
    }
    printf("\n");
}
