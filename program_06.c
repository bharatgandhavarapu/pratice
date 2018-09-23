/* Write a program to read three positive numbers and print the min, max and average of the given */

#include<stdio.h>
int main(){
    int min, max;
    float average;
    int firstNumber, secondNumber, thirdNumber;
    printf("\n Enter three numbers with spaces in between to calculate minimum, maximum & average : ");
    scanf("%d %d %d",&firstNumber,&secondNumber,&thirdNumber);
    min = ((firstNumber < secondNumber)&&(firstNumber < thirdNumber))?firstNumber:(secondNumber < thirdNumber)?secondNumber:thirdNumber;
    max = ((firstNumber > secondNumber)&&(firstNumber > thirdNumber))?firstNumber:(secondNumber > thirdNumber)?secondNumber:thirdNumber;
    average = ((firstNumber + secondNumber + thirdNumber)/3);
    printf("\n Minimum of %d %d & %d is %d\n",firstNumber,secondNumber,thirdNumber,min);
    printf("\n Maximum of %d %d & %d is %d\n",firstNumber,secondNumber,thirdNumber,max);
    printf("\n Average of %d %d & %d is %.2f\n",firstNumber,secondNumber,thirdNumber,average);
    return 0;
}
