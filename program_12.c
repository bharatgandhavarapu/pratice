/* Write a program to print alternate 7 divisible numbers between 50 and 100 */

#include<stdio.h>
int main(){
    int startNumber=50, range=100, count=0;
    printf("\n Alternative 7 divisible numbers between 50 to 100 are as follows : \n\n");
    while(startNumber<=range){
        if(startNumber%7==0){
            count++;
            if(count%2!=0)
                printf(" %2d ",startNumber);
        }
        startNumber++;
    }
    printf("\n");
    return 0;
}
