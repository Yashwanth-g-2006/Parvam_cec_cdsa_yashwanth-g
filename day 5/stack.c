#include<stdio.h>
#define SIZE 4
int stack_arr[SIZE], top = -1;
void push(int data){
    if(top == SIZE - 1){
        printf("stack overflow\n");
    }
    else{
        top=top+1;
        stack_arr[top]=data;
        printf("%d is pushed into the stack.\n", data);   
    }    
}
void pop(){
    if(top== -1){
        printf("stack underflow\n");
    }
    else{
        printf("%d is popped from the stack.\n",stack_arr[top--]);
    }    
}
void display (){
    if(top == -1){
        printf("stack is empty.\n");
    }
    else{
        printf("stack elements are as follows:\n");   
        for(int i=top; i>=0; i--){
            printf("%d\t", stack_arr[i]);
        }
        printf("\n");
    }
}
int main(){
    push(20);
    push(40);
    push(60);
    push(80);
    push(100);
    display();
    pop();
    pop();
    display();
}
