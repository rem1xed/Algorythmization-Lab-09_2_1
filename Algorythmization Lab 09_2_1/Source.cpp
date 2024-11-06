#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include "myMacros.h"
void main()
{
	char ch = ' ';
	int x = 0, y = 0, result = 0;
	do
	{
#if Z <= 3
		puts("enter x, y");
		scanf("%d", &x);
		scanf("%d", &y);
		result = SECOND(x, y);
		PRINTR(result);
#else 
		{
			puts("enter x, y");
			scanf("%d", &x);
			scanf("%d", &y);
			result = FIRST(x, y);
			PRINTR(result);
		}
#endif
		puts("Repeat? y /n ");
		scanf(" %c", &ch);
	} while (ch == 'y');
}