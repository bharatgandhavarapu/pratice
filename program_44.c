/* Write a program to print the pyramid of '$' for the given number of lines */

#include<stdio.h>
int main(){
    int row, column, noLines, spaces;
    printf("\n Enter no. of lines to print pyramid using '$' : ");
    scanf("%d",&noLines);

    for(row=0;row<noLines;row++){
        for(column=0;column<noLines-row;column++){
            printf("  ");
        }
        for(column=0;column<2*row-1;column++){
            printf(" $ ");
        }
        printf("\n\n");
    }
    printf("\n");
    return 0;
}
