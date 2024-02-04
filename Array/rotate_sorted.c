#include<stdio.h>
void getArray(int size,int nums[]){
     for(int i=0;i<size;i++){    
       printf("[%d]",i);
       scanf("%d",&nums[i]);
      }
}
void printArray(int size,int nums[]){
    for(int i=0;i<size;i++){
      printf("%d ",nums[i]);
    }
}
void sortedArray(int size,int nums[]){
   int temp;
      for(int i=0;i<size;i++){
         for(int j=i+1;j<size;j++){
             if(nums[i]>nums[j]){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
              }
          }
      }
}
void rotateArray(int nums[],int arr[],int size,int size2){
    int index;
    printf("\nEnter the index to rotate Array:");
    scanf("%d",&index);
    for(int i=index-1;i<size;i++){
          arr[size2]=nums[i];
          size2++;
    }
    for(int i=0;i<index-1;i++){
          arr[size2]=nums[i];
          size2++;
    } 
    for(int i=0;i<size;i++){
          nums[i]=arr[i];
    } 
    for(int i=0;i<size;i++){
      if(i==index){
        printf("\nThe New value of at index is:%d\n",arr[i]);
      }
    }   
}
void main(){
    int size,size2=0;
    printf("Enter Size of Array:");
    scanf("%d",&size);
    int nums[size],arr[size];
    getArray(size,nums);
    sortedArray(size,nums);
    printf("\nThis is sorted Array:\n");
    printArray(size,nums);
    rotateArray(nums,arr,size,size2);
    printf("This is rotated Array:\n");
    printArray(size,nums);
}
