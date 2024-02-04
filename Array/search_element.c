/*Given a sorted array of distinct integers and a target value, return the index 
 if the target is found. If not, return the index where 
 it would be if it were inserted in order.*/
 /*Input: nums = [1,3,5,6], target = 5
   Output: 2
   Input: nums = [1,3,5,6], target = 7
   Output: 4*/ 
#include <stdio.h>
int main() {
    int nums[4] = {1, 3, 5, 6};
    int size = 4;
    int target;
    printf("Enter your target: ");
    scanf("%d", &target);
    int index = 0;
    while (index < size && nums[index] < target) {
        index++;
    }
    printf("The index where the target should be inserted: %d\n",index);
    return 0;
}