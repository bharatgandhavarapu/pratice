/* Write a program to print the sum of squares of first 5 three divisible numbers from 100 */

#include<stdio.h>
int main(){
    int startNumber=100, count=5, sum=0;
    printf("\n Sum of squares of first 5 three divisible numbers from 100 are as follows : \n\n");
    while(count!=0){
        if(startNumber%3==0){
            sum += startNumber*startNumber;
            count--;
            printf(" %3d ",startNumber);
        }
        startNumber++;
    }
    printf("\n\n Sum of squares of first 5 three divisible numbers from 100 is : %d\n",sum);
    return 0;
}
