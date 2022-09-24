#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char arr[50];
//	scanf("%s", &arr);
//	int left = 0;
//	int right = strlen(arr);
//	int count = 0;
//	while (left < right)
//	{
//		int i = 0;
//		for (i = 1; i <= 9; i++)
//		{
//			if (arr[left] - '0' == i)
//			{
//				printf("%d", i);
//				count++;
//				break;
//			}
//		}
//		if (arr[left] - '0' != i)
//		{
//			left++;
//			continue;
//		}
//		int j = 0;
//		for (j = 1; j <= 10; j++)
//		{
//			if (arr[left + 1] - '0' == j)
//				break;
//			if (j == 10 && left < right - 1)
//				printf(",");
//		}
//		left++;
//	}
//	if(count==0)
//	printf("None");
//	return 0;
//}
//int tem(int *m, int n)
//{
//	int i = 0;
//	for (i = 0; i <n; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j <n; j++)
//		{
//			if (i != j)
//			{
//				if (m[i] == m[j])
//					count++;
//			}
//			if (count == 1)
//				break;
//		}
//		if (count == 0)
//			return i;
//	}
//}
//int main()
//{
//	int arr[5] = {4,1,2,1,2 };
//	int a = tem(arr, 3);
//	printf("%d", arr[a]);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 1;
//	for (i = 2; i <= 5; i++)
//	{
//		n = n * i;
//	}
//	printf("%d", n);
//	return 0;
//}
int main()
{
	int sign = 1;
	int i= 0;
	double term, sum = 0.0;
	for (i = 0; i < 100; i++)
	{
		term = (double)1 / (i + 1);
		term = term * sign;
		sum = sum + term;
		sign = sign * -1;
	}
	printf("sum=%lf", sum);
	return 0;
}
