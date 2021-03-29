public class Solution
{
	public static int NumJewelsInStones(string jewels, string stones)
	{
		char[] arrJewels = jewels.ToCharArray();
		char[] arrStones = stones.ToCharArray();
		int res = 0;
		foreach (char j in arrJewels)
		{
			foreach (char s in arrStones)
			{
				if (j == s)
					res++;
			}
		}
		return (res);
	}
}
