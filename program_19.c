/* Write a program to print the conversion table to change the temperature in centigrade(C) to temperature in Fahrenheit (F)
 for all temperatures between 28C to 50C. Use the formula F = (9/5) C+32
 */

 #include<stdio.h>
 int main(){
    float foreignTemperature;
    int startTemperature, range;
    do{
        printf("\n Enter temperature ranges in centigrade with a space in between : ");
        scanf("%d %d",&startTemperature,&range);
        if(startTemperature>=range){
            printf("\n Starting temperature is always less than the range\n\n Please try again...\n");
        }
    }while(startTemperature>=range);
    while(startTemperature<=range){
        foreignTemperature = (startTemperature+32)*9/5;
        printf("\n Temperature change in %d centigrade(C) to Fahrenheit is : %.2f\n",startTemperature,foreignTemperature);
        startTemperature++;
    }
    return 0;
 }
