//C program to find sum of main diagonal elements of a matrix


#include<stdio.h>
int main(){
    
    int row,column,i,j,sum=0;
    
    printf("Enter the size of row:");
    scanf("%d",&row);
    
    printf("Enter the size of an column:");
    scanf("%d",&column);
    
    int array[row][column];
    
    //scanf the elements of array1
    
    printf("Enter elements of array1: \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    
    for(i=0;i<row;i++){
        sum=sum+array[i][i];
    }
    
   printf("Sum of main diagonal elements = %d",sum);
    
    return 0;
}
