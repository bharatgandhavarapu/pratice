/* Write a program to print the multiplication table that covers the numbers from 1 to 10 */

#include<stdio.h>
int main(){
    int loop1, loop2, value;
    for(loop1=1;loop1<=10;loop1++){
        printf("\n Multiplication table for %d is as follows : \n",loop1);
        for(loop2=1;loop2<=10;loop2++){
            value = loop1 * loop2;
            printf("\n %3d X %3d : %4d",loop1,loop2,value);
        }
        printf("\n\n");
    }
    return 0;
}
