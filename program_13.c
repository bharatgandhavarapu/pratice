/* Write a program to print first 5 alternate 7 divisible numbers after 100 */

#include<stdio.h>
int main(){
    int startNumber=100, count=10;
    printf("\n First 5 alternative 7 divisible numbers after 100 are as follows : \n\n");
    while(count!=0){
        if(startNumber%7==0){
            count--;
            if(count%2!=0)
                printf(" %3d ",startNumber);
        }
        startNumber++;
    }
    printf("\n");
    return 0;
}
