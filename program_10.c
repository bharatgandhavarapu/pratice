/* Write a program to print alternative numbers from 50 to 100 */

#include<stdio.h>
int main(){
    int startNumber=50, range=100;
    printf("\n Alternative numbers from 50 to 100 are as follows : \n\n");
    while(startNumber<=range){
        if(startNumber%2==0)
            printf(" %3d ",startNumber);
        startNumber++;
    }
    printf("\n");
    return 0;
}
