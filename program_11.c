/* Write a program to print 3 divisible numbers between 1 and 50 */

#include<stdio.h>
int main(){
    int startNumber=1, range=50;
    printf("\n 3 divisible numbers between 1 to 50 are as follows:\n\n");
    while(startNumber<=range){
        if(startNumber%3==0)
            printf(" %2d ",startNumber);
        startNumber++;
    }
    printf("\n");
    return 0;
}
