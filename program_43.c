/* Write a program to print the half pyramid of '$' for the given number of lines */

#include<stdio.h>
int main(){
    int row, column, noLines;
    printf("\n Enter no. of lines to print half pyramid using '$' : ");
    scanf("%d",&noLines);
    for(row=0;row<=noLines;row++){
        printf("\n");
        for(column=0;column<row;column++){
            printf(" $ ");
        }
    }
    printf("\n");
    return 0;
}
