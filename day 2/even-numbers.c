#include<stdio.h>
int main(){
    int num;
    printf("enter the range to print the even numbers:");
    scanf("%d",&num);
    // for(initialization; condition;  increment/decrement)
    printf("the even numbers between 0 to %d are as follows:\n", num);
    for(int i=0; i<=num; i++){
        if(i%2==0){
        printf("%d\n",i);
        }
    }
}