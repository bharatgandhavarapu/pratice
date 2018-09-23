/* Write a program to print alphabets in lowercase from 'a' to 'z' */

#include<stdio.h>
int main(){
    int startNumber=97, range=122;
    printf("\n Alphabets in lowercase from %c to %c are as follows : \n\n",startNumber,range);
    while(startNumber<=range){
        printf(" %c ",startNumber++);
    }
    printf("\n");
    return 0;
}
