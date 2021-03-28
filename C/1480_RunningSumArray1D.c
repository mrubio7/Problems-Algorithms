#include <stdlib.h>
#include <stdio.h>

int *runningSum(int *nums, int numsSize, int *returnSize)
{
	int *result;
	int x;

	x = 0;
	result = (int*)malloc(numsSize * sizeof(int));
	result[x] = nums[x];
	for (x = 1; x < numsSize; x++)
	{
		result[x] = result[x - 1] + nums[x];
	}
	*returnSize = numsSize;
	return (result);
}
