#include <stdio.h>

main()
{
	int mas[100];
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &mas[i]);	
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%4d", mas[i]);	
	}
	printf("\n");	
	
	/*for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (mas[i] == 0)
			{
				for (int t = i; t < n-1; t++)
				{
				mas[t] = mas[t+1];
				}
			n = n - 1;
			}	
		}
	}*/
	
	for (int i = 0; i < n - 1; i++)
	{
		if (mas[i] == 0)
		{
			for (int t = i; t < n-1; t++)
			{
			mas[t] = mas[t+1];
			}
		n --;
		i --;
		}	
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%4d", mas[i]);
	}
}
