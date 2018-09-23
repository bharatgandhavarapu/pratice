/* Write a program to print the diamond 'K' for the given number of lines */

#include<stdio.h>
int main(){
    int row, column, noLines;
    printf("\n Enter no. of lines to print diamond shape 'K' : ");
    scanf("%d",&noLines);
    for(row=noLines;row>0;row--){
        printf("\n");
        for(column=row;column>0;column--){
            printf(" * ");
        }
    }
    for(row=0;row<=noLines;row++){
        for(column=0;column<row;column++){
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
