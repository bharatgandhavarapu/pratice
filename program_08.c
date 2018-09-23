/* Write a program to print 1 to 10 numbers */

#include<stdio.h>
int main(){
    int startNumber=1, range=10;
    printf("\n To print 1 to 10 Numbers using while loop are as follows : \n\n");
    while(startNumber<=range){
        printf(" %2d ",startNumber++);
    }
    printf("\n");
    return 0;
}
