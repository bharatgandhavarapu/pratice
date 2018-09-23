/* Write a program to print sum of all prime numbers between 1 and 25 */

#include<stdio.h>
int main(){
    int startNumber=1, range=25, loop=2, count=0, temp, sum=0;
    printf("\n Prime numbers from 1 - 25 are as follows : \n\n");
    while(startNumber<=range){
        loop=2;
        count=0;
        temp = startNumber;
        while(loop<=temp/2){
            if(temp%loop==0){
                count++;
                break;
            }
            loop++;
        }
        if(count==0 && startNumber!=1){
            sum += startNumber;
            printf(" %2d ",startNumber);
        }
        startNumber++;
    }
    printf("\n\n Sum of all prime numbers between 1 and 25 is : %3d\n",sum);
    return 0;
}
