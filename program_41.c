/* Write a program to print rectangle of '*' for the give no of lines */

#include<stdio.h>
int main(){
    int length, breadth, loop1, loop2;
    do{
        printf("\n Enter length and breadth of a rectangle with a space in between them : ");
        scanf("%d %d",&length,&breadth);
    }while(length==breadth);
    for(loop1=0;loop1<=length;loop1++){
        printf("\n");
        for(loop2=0;loop2<=breadth;loop2++)
            printf(" * ");
        printf("\n");
    }
    return 0;
}
