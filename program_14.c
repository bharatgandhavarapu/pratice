/* Write a program to print the sum of every fourth integer, beginning with 5 for all values less than 100 */

#include<stdio.h>
int main(){
    int startNumber=5, range=100, count=0, sum=0;
    printf("\n All 4th integers from 5 to 100 are as follows : \n\n");
    while(startNumber<=range){
        if(count%4==0){
            count=0;
            sum += startNumber;
            printf(" %3d ",startNumber);
        }
        count++;
        startNumber++;
    }
    printf("\n\n Sum of Every 4th integer is %d \n",sum);
    return 0;
}
