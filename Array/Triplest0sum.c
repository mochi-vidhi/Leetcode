/* Given an integer array nums, return all the triplets 
 [nums[i], nums[j],nums[k]] such that i != j, i != k, and j != k,
 and nums[i] + nums[j] + nums[k] == 0.
 Notice that the solution set must not contain duplicate 
 triplets.
 Example 1:
 Input: nums = [-1,0,1,2,-1,-4]
 Output: [[-1,-1,2],[-1,0,1]]*/

#include<stdio.h>
//The function "triplets0sum" takes an array of integers and finds all triplets whose sum is equal to zero.
void triplets0sum(int size,int nums[]){
    for(int i=0;i<size;i++){
      for(int j=i+1;j<size-1;j++){
        for(int k=j+1;k<size-1;k++){
          if(i!=j && j!=k && k!=i){ 
            if(nums[i]+nums[j]+nums[k]==0){
             printf("[%d %d %d]\n",nums[i],nums[j],nums[k]);
            }          
        }
    }
}
   size--;
}
}
void main(){
    int nums[6]={-1,0,1,2,-1,-4};
    int size=6;
    triplets0sum(size,nums);
} 
