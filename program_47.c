/* Write a program that initialized two 3*3 integer matrices and displays the product of both */

#include <stdio.h>

int main() {
    int row, column ,firstMatrix[3][3], secondMatrix[3][3], productOfMatrices[3][3], k;
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
        productOfMatrices[row][column]=0;
      }
    }

    for(row=0;row<3;row++){
      for(column=0;column<3;column++){
        for(k=0;k<3;k++){
            productOfMatrices[row][column] += firstMatrix[row][k]*secondMatrix[k][column];
        }
      }
    }

    printf("\n Product of 2 matrices are : \n");
    for(row=0;row<3;row++){
      for(column=0;column<3;column++){
        printf(" %4d ",productOfMatrices[row][column]);
      }
      printf("\n");
    }
  return 0;
}
