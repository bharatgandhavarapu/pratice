/* Write a program to print first 5 Armstrong numbers after 100 */

#include<stdio.h>
int main(){
    int startNumber=100, count=0, armstrongNumber=0, temp1, temp2;
    printf("\n First 4 Armstrong numbers after 100 are as follows : \n\n");
    while(count!=4){
        temp1 = startNumber;
        while(temp1!=0){
            temp2 = temp1%10;
            armstrongNumber += temp2*temp2*temp2;
            temp1 = temp1/10;
        }
        if(armstrongNumber==startNumber){
            printf(" %3d ",startNumber);
            count++;
        }
        armstrongNumber=0;
        startNumber++;
    }
    printf("\n");
    return 0;
}
