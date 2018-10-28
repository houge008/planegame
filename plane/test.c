#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void main()
{
	int i, j;
	int x = 0;
	int y = 5;
	char input;
	//scanf("%c", &input);

	while (1)
	{
		system("cls");
		for (i = 0; i < x; i++)
			printf("\n");
		for (j = 0; j < y; j++)
			printf(" ");
		printf("*\n");

		//scanf_s("%c", &input);
		input = _getch();
		if (input == 's')
			x++;
		if (input == 'w')
			x--;
		if (input == 'a')
			y--;
		if (input == 'd')
			y++;
	}
}