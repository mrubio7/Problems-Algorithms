#include <stdio.h>

int numJewelsInStones(char *jewels, char *stones)
{
	int res = 0;
	int x;
	int z;

	for (x = 0; jewels[x] != '\0'; x++)
	{
		for (z = 0; stones[z] != '\0'; z++)
		{
			if (jewels[x] == stones[z])
				res++;
		}
	}
	return (res);
}
