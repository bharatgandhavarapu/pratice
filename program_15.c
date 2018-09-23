/* Write a program to print the sum of all 6 divisible numbers between 1 and 50 */

#include<stdio.h>
int main(){
    int startNumber=1, range=50, sum=0;
    printf("\n Sum of all 6 divisible numbers between 1 to 50 are as follows : \n\n");
    while(startNumber<=range){
        if(startNumber%6==0){
            sum += startNumber;
            printf(" %2d ",startNumber);
        }
        startNumber++;
    }
    printf("\n\n Sum of all 6 divisible numbers between 1 to 50 is : %d\n",sum);
    return 0;
}
