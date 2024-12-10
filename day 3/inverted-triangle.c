#include<stdio.h>
int main(){
    int row;
    printf("enter the number of rows:");
    scanf("%d", &row);
    for(int i=row;i>=row;i--){
        for(int j=0;j<i;j++){
            printf("*\t");
        }
        printf("\n");
    }
}