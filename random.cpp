#include <stdlib.h>
#include <stdio.h>
#include <time.h>

main()
{	
	int i = 0;
	//printf("%d", time(NULL));
	
//	srand(time(NULL));
//	printf("%d", rand());
	
	
	/*srand(time(NULL));
	while(1)
	{
		printf("%d \n", rand()%5);
	}*/ //ot 0 do 4
	
	
	/*
	srand(time(NULL));
	while(1)
	{
		printf("%d \n", rand()%11-5);
	} //ot -5 do 5 */
	
	srand(time(NULL));
	while(i < 3)
	{
		printf("%d \n", rand()%11);
		i++;
	}
}
