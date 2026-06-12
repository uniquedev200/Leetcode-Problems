//Leetcode Problem 268 
int missingNumber(int* nums, int numsSize) {
    int totalSum = ((numsSize)*(numsSize+1))/2;
    int sum = 0;
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
    }
    return totalSum-sum;

}