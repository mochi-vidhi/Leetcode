#include<stdio.h>
void getArray(int size,int arr[]){
    for(int i=0;i<size;i++){
        printf("[%d]:",i);
        scanf("%d",&arr[i]);
    }
}
void printArray(int size,int arr[]){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void onePlusSumArray(int size,int arr[]){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("\nsum is:%d\n",sum+1);
    arr[size-1]+=1;
}
void main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    getArray(size,arr);
    printf("\nBefore performing oneplus:\n");
    printArray(size,arr);
    onePlusSumArray(size,arr);
    printf("\nAfter performing oneplus:\n");
    printArray(size,arr);
}