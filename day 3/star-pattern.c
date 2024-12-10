#include<stdio.h>
int main(){
    int row, column;
    printf("enter the number of rows & columns:");
    scanf("%d %d", &row,&column);
    for(int i=0;i<row;i++){
        for(int j=0;j< column;j++){
            printf("*\t");
        }
        printf("\n");
    }
}