#include<stdio.h>
int main(){
    int num=20;    
    printf("the value of number:%d\n" , num);
    printf("the address of number(%d): %p\n", num, &num);
    //datatype*pointer_variable=&reference
    int* ptr = &num;//ptr-pointer variable
    printf("the address of pointer:%p\n" ,ptr);
    printf("the value of pointer:%d\n" ,*ptr);
    *ptr=30;
    printf("the updated value of number:%d\n" , num);
}

//pointer-a special variable which is used to store the value of another variable
//*-derefrencing or value
//&-refrencing or address
//ptr-address of reference variable
//*ptr-value
//*ptr=(any number)-will change the original value