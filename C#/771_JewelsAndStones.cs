public class Solution
{
	public static int NumJewelsInStones(string jewels, string stones)
	{
		int res = 0;
		foreach (char j in jewels)
		{
			foreach (char s in stones)
			{
				if (j == s)
					res++;
			}
		}
		return (res);
	}
}
