/* Write a program to convert the given centigrade temperature to foreign heat */

#include<stdio.h>
int main(){
    int temperature, forigenHeat;
    printf("\n Enter temperature in centigrade to convert into foreign heat : ");
    scanf("%d",&temperature);
    forigenHeat = ((temperature + 32)*9/5);
    printf("\n After conversion from centigrade to foreign heat is : %d\n",forigenHeat);
    return 0;
}
