/*median of two sorted array
 Input: nums1 = [1,3], nums2 = [2]
 Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.*/
#include <stdio.h>
void main() {
    int nums1[4] = {1,3,4,9};
    int nums2[2] = {2,6};
    int size1 = 4, size2 = 2, index = 0;
    int size3 = size1 + size2;
    int nums3[size3];
    for (int i=0; i<size1; i++) {
        nums3[index] = nums1[i];
        index++;
    }
    for (int j=0; j<size2; j++) {
        nums3[index] = nums2[j];
        index++;
    }
    printf("Merged Array :\n");
    for (int i=0; i<size3; i++) {
        printf("%d ", nums3[i]);
    }
    int temp;
    for(int i=0;i<size3;i++){
        for(int j=i+1;j<size3;j++){
            if(nums3[i]>nums3[j]){
                temp=nums3[i];
                nums3[i]=nums3[j];
                nums3[j]=temp;
            }
        }
    }
    printf("\nMerged Array in Sorted Order:\n");
    for (int i = 0; i < size3; i++) {
        printf("%d ", nums3[i]);
    } 
    int sum=0;
    for(int i=0;i<size3;i++){
         sum+=nums3[i];
    }
    int median=sum/size3;
    printf("\nmedian is %d",median); 
}
