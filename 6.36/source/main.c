#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringReverse(char str[]);

int main(void)
{

	char str[50];

	printf("�п�J�@�Ӧr��: ");
	gets(str); //scanf���౵���Ů�B�s���Tab�BEnter���F��gets��������Ů�B�s���Tab�MEnter���F
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

	printf("�ഫ�᪺�r��: ");

	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}