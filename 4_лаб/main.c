#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "func.h"

void menu(int task_count)
{
	int i = 1;
	while (i <= task_count)
	{
		printf("%d. zadanie %d\n", i, i);
		++i;
	}
	printf("%d. vihod \n", i);
}


int main()
{
	double x, result;
	_Bool close_flag = true;
	int arr[N];
	int c;
	


	while (close_flag)
	{
		menu(2);
		scanf_s("%d", &c);
		switch (c)
		{
		case 1:
			printf("vvedite x = ");
			scanf_s("%lf", &x);
			f(&x, &result);
			printf("f = %lf \n", result);
			break;
		case 2:
			sortStackArray(arr, N);
			break;
		case 3:
			close_flag = false;
			break;
		}

	}
}