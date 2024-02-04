/*Sum of two variable is equal to target and return indices 
 Input: nums = [2,7,11,15], target = 9
 Output: [0,1]*/
#include<stdio.h>
void getElement(int size,int nums[]){
    for(int i=0;i<size;i++){
        printf("[%d]:",i);
        scanf("%d",&nums[i]);
    }
}
void indicesOfTwo(int size,int nums[]){
  int target;
  printf("Enter your target:");
  scanf("%d",&target);
  for(int i=0;i<size;i++){
    if(nums[i]+nums[i+1]==target){
        printf("\nIndices of two numbers:[%d,%d]",i,i+1);
    }
  }
}
void main(){
  int size;
  printf("Enter the size of array:");
  scanf("%d",&size);
  int nums[size];
  getElement(size,nums);
  indicesOfTwo(size,nums);
}