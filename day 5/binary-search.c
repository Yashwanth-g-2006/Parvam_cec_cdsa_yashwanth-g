#include<stdio.h>
void binarySearch(int array[], int size, int key){
    int low=0, high=size-1, mid;
    int flag=0;
    while(low<=high){
        mid=(low+high)/2;
        if(array[mid] == key){
            printf("the key element %d is found at index %d.\n", key, mid);
            flag=1;
            break;
        }
        else if(array[mid]< key){
            low = mid+1;
        }
        else{
            high = mid-1; 
        }
    }
    if(!flag){
        printf("the key %d is not present in the given array.\n" , key);
    }
}
int main(){
    int size,key;
    printf("enter the size of the array:");
    scanf("%d", &size);
    int sort_arr[size];
    printf("enter the array elements in the ascending order:");
    for(int i=0; i<size; i++){
        scanf("%d", &sort_arr[i]);         
    }
    printf("enter the key that need to be searched:");
    scanf("%d", &key);
    binarySearch(sort_arr, size, key);
}