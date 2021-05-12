#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	return 0;	
}

char *longestCommonPrefix(char **strs, int strsSize)
{
	int minNum = 200;
	for (int i = 0; i < strsSize; i++)
	{
		if (minNum > strlen(strs[i]))
		{
			minNum = strlen(strs[i]);
		}
	}

	char *buf = (char *)malloc(sizeof(char) * (minNum + 1));
	memset(buf, '\0', (minNum + 1));

	int flag = 1;

	for (int i = 0; i < minNum; i++)
	{
		for (int j = 1; j < strsSize; j++)
		{
			if (strs[0][i] != strs[j][i])
			{
				flag = 0; //出现不同
				break;
			}
		}

		if (flag == 1)
		{
			buf[i] = strs[0][i];
		}
		else
		{
			break;
		}
	}

	return buf;
}