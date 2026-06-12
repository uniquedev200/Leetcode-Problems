//Leetcode Problem 53 solution using Kadane's Algorithm
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int maxSubArray(int* nums, int numsSize) {
    int current_max = nums[0];
    int max_so_far  = nums[0];
    for(int i=1;i<numsSize;i++){
        current_max = MAX(nums[i],nums[i]+current_max);
        max_so_far = MAX(current_max,max_so_far);
    }
    return max_so_far;
}