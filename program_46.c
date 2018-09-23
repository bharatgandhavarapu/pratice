/* Write a program that initializes two 3*3 integer matrices and displays the sum of both */

#include <stdio.h>

int main() {
    int row, column ,firstMatrix[3][3], secondMatrix[3][3], sumOfMatrices[3][3];
    printf("\n Enter 9 elements in 1st matrix elements one by one : \n");
    for(row=0;row<3;row++){
      for(column=0;column<3;column++){
        scanf("%d",&firstMatrix[row][column]);
      }
    }
    printf("\n Enter 9 elements in 2nd matrix elements one by one : \n");
    for(row=0;row<3;row++){
      for(column=0;column<3;column++){
        scanf("%d",&secondMatrix[row][column]);
      }
    }

    for(row=0;row<3;row++){
      for(column=0;column<3;column++){
        sumOfMatrices[row][column]=firstMatrix[row][column]+secondMatrix[row][column];
      }
    }

    printf("\n Sum of 2 matrices are : \n");
    for(row=0;row<3;row++){
      for(column=0;column<3;column++){
        printf("%4d ",sumOfMatrices[row][column]);
      }
      printf("\n");
    }
  return 0;
}
