#include<stdio.h>
int main(){
    int num;
    printf("enter the range to print the numbers:");
    scanf("%d",&num);
    // for(initialization; condition;  increment/decrement)
    printf("the numbers between 0 to %d are follows:\n:", num);
    for(int i=0; i<=num; i++){
        printf("%d\n",i);
    }
}