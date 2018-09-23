/* Write a program to print alternative prime numbers between 1 and 100 in reverse direction */

#include<stdio.h>
int main(){
    int startNumber=100, endNumber=1, count=0, loop=2, alternative=0, temp;
    printf("\n Print alternative prime numbers from 1 to 100 are as follows : \n\n");
    while(startNumber>=endNumber){
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
            alternative++;
            if(alternative%2!=0)
                printf(" %2d ",startNumber);
        }
        startNumber--;
    }
    printf("\n");
    return 0;
}
