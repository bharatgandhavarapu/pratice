/* Write a program to print the numbers from 1 to 100 with five values per line, two blank spaces between values */

#include<stdio.h>
int main(){
    int startNumber=1, range=100;
    printf("\n Numbers from 1 to 100 with five values per line, two blank spaces between values are as follows : \n\n");
    while(startNumber<=range){
        if(startNumber%5==0)
            printf(" %3d\n\n",startNumber);
        else
            printf(" %3d ",startNumber);
        startNumber++;
    }
    return 0;
}
