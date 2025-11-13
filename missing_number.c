int missingNumber(int* nums, int numsSize) {
    int sum, real_sum = 0;
    sum = numsSize * (numsSize + 1) / 2;
    for(int i = 0; i < numsSize; i++)
    {
        real_sum += nums[i];
    }
    int missing = sum - real_sum;
    return missing;
}