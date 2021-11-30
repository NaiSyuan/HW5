#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k, first, second,sum;
	int a[11] = { 0 };

	for (i = 0; i < 36000; i++)
	{
		first = 1 + rand() % 6;
		second = 1 + rand() % 6;
		sum = first + second;
		switch (sum)
		{
		case 2: a[0] ++; break;
		case 3: a[1] ++; break;
		case 4: a[2] ++; break;
		case 5: a[3] ++; break;
		case 6: a[4] ++; break;
		case 7: a[5] ++; break;
		case 8: a[6] ++; break;
		case 9: a[7] ++; break;
		case 10: a[8] ++; break;
		case 11: a[9] ++; break;
		case 12: a[10] ++; break;
		}
	}

	for (i = 2; i <= 12; i++)
	{
		printf("%d = %d\n",i,a[i-2]);
	}

	
}