using System;

namespace RunningSum1D
{
    public class Solution
    {
        public static int[] RunningSum(int[] nums)
        {
            int i = 0;
            int j = 0;
            int[] result = { 0, 0, 0, 0 };
            foreach (int nb in nums)
            {
                result[i] = nb;
                j = i;
                while (j >= 0)
                {
                    if (j != i)
                        result[i] += nums[j];
                    j--;
                }
                i++;
            }
            return (result);
        }
    }
}
