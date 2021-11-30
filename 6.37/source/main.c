#include <stdio.h>
#include <stdlib.h>

int recursiveMinimum(int b[]);

int main(void)
{
	int result;
	int a[10] = {2,5,3,1,4,6,7,8,9,100};
	result = recursiveMinimum(a);
	printf("minimum is %d", result);
}

int recursiveMinimum(int a[])
{
	int i;
	int min = a[0];
	for (i = 0; i < 10; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}