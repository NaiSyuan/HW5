#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringReverse(char str[]);

int main(void)
{

	char str[50];

	printf("請輸入一個字串: ");
	gets(str); //scanf不能接受空格、製表符Tab、Enter等；而gets能夠接受空格、製表符Tab和Enter等；
	stringReverse(str);

	system("pause");
	return 0;
}

void stringReverse(char str[]) 
{
	int i = 0, j = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	printf("轉換後的字串: ");

	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}