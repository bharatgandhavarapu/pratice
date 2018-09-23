/* Write a program to print the alphabets from A-Z in reverse */

#include<stdio.h>
int main(){
    int startNumber=90, range=65;
    printf("\n Alphabets in reverse from Z - A are as follows : \n\n");
    while(startNumber>=range){
        printf(" %c ",startNumber--);
    }
    printf("\n");
    return 0;
}
