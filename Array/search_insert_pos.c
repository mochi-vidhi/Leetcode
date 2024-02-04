#include<stdio.h>
#define ub 50
void getElement(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("[%d]:",i);
        scanf("%d",&arr[i]);
    }
}
int insertSearch(int arr[],int size){
  int value,pos,index;
  size++;
  printf("Enter the value:");
  scanf("%d",&value);
  printf("Enter the position:-");
  scanf("%d",&pos);
  for(int i=size-1;i>=pos-1;i--){
    arr[i+1]=arr[i];
  }
  arr[pos-1]=value;
  for(int i=0;i<size;i++){
    if(arr[i]==value){
        index=i;
    }
  }
  printf("\nThe value is inserted at index %d\n",index);
}
void printData(int arr[],int size){
   for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int size;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    int arr[size];
    getElement(arr,size);
    printf("\nBefore Insertion\n");
    printData(arr,size);
    size++;
    insertSearch(arr,size);
    printf("After Insertion\n");
    printData(arr,size);
    return 0;
}