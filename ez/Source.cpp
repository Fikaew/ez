#include<stdio.h>
int main()
{
	int x = 1, n = 0;
	for (x;x > 0;)
	{
		scanf_s("%d", &x);
		for (int a = 1; a <= x; a++)
		{
			if (x % a == 0)
			{
				n++;
			}
		}
		if (n == 2)
		{
			printf("%d is primeNumber\n", x);
			n = 0;
		}
		else if (x <= 0)
		{
			printf("End Program...");
		}
		else
		{
			printf("%d isn't primeNumber\n", x);
			n = 0;
		}
	}
	return 0;
}