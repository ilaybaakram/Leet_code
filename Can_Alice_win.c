bool canAliceWin(int* nums, int numsSize) {
    int singleSum = 0;
    int doubleSum = 0;
    int total = 0;

    for(int i = 0; i < numsSize; i++){
        total += nums[i];
        if(nums[i] < 10)
            singleSum += nums[i];
        else
            doubleSum += nums[i];
    }

    // Alice chooses single-digit numbers
    if(singleSum > total - singleSum)
        return true;

    // Alice chooses double-digit numbers
    if(doubleSum > total - doubleSum)
        return true;

    return false;
}
