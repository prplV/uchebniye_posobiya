#include <stdio.h>

//---------------------------------------------------
/*zamesh'enie odnoi stroki drugoy
main()
{
	int mas[100][100];
	int n, m;
	
	scanf("%d%d", &n, &m);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &mas[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%4d", mas[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n\n\n");
	
	for (int i = 0; i < m; i++)
	{
		int z = mas[0][i];
		mas[0][i] = mas[n-1][i];
		mas[n-1][i] = z;
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%4d", mas[i][j]);
		}
		printf("\n\n");
	}
}
//-----------------------------------------------------
*/


//zamesh'enie odnogo strolbca drugim
main()
{
	int mas[100][100];
	int n, m;
	
	scanf("%d%d", &n, &m);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &mas[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%4d", mas[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n\n\n");
	
	for (int i = 0; i < n; i++)
	{
		int z = mas[i][0];
		mas[i][0] = mas[i][m-1];
		mas[i][m-1] = z;
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%4d", mas[i][j]);
		}
		printf("\n\n");
	}
}
