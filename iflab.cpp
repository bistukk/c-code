#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[50];
	scanf("%s", &arr);
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		int i = 0;
		for (i = 1; i <= 9; i++)
		{
			if (arr[left] = i)
			{
				printf("%d", i);
				break;
			}
		}
		left++;
	}
	return 0;
}