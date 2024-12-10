#include<stdio.h>
int main(){
    int row;
    printf("enter the number of rows & columns:");
    scanf("%d %d", &row);
    for(int i=1;i<=row;i++){
        for(int j=0;j<i;j++){
            printf("*\t");
        }
        printf("\n");
    }
}