#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("enter any three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    if((num1 > num2)&&(num1 > num3)){
        printf("first number(%d)is greatest", num1);
    }
    else if(num2 > num3){
            printf("second number(%d)is greatest", num2);
    }
    else{
        printf("third number(%d)is greatest", num3);
    }
}        