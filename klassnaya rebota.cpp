#include <stdio.h>

main()
{
	int mas[100];
	int n;
	scanf("%d", &n);
	int ch_1, ch_2, ch_3;
	ch_1 = ch_2 = ch_3 = 0;
	int z = 0;
	int i = 0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &mas[i]);	
	}
	printf("\n");
	
	for (int i = 0; i < n; i++)
	{
		printf("%4d ", mas[i]);	
	}
	printf("\n");	
	
	for (int j = 1; j < n; j++)
	{
		z = mas[j];
		i = j - 1;
		while ((i >= 0)and(mas[i] > z))
		{
			mas[i+1] = mas[i];
			i = i - 1;
			mas[i+1] = z;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%4d ", mas[i]);
	}
	printf("\n\n\n\n");
	printf("%d %d %d", ch_1, ch_2, ch_3);
}
