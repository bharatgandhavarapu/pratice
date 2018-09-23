/* Write a program to print the sum of alternate 7 divisible numbers between 1 and 50 */

#include<stdio.h>
int main(){
    int startNumber=1, range=50, count=0, sum=0;
    printf("\n Sum of alternate 7 divisible numbers between 1 and 50 are as follows : \n\n");
    while(startNumber<=range){
        if(startNumber%7==0){
            count++;
            if(count%2!=0){
                sum += startNumber;
                printf(" %2d ",startNumber);
            }
        }
        startNumber++;
    }
    printf("\n\n Sum of alternate 7 divisible numbers between 1 and 50 is : %d\n",sum);
    return 0;
}
