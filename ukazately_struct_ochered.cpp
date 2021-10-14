#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//********************************************ukazately********************************************

main()
{	
	//********************************************1********************************************
	/*int a;
	a = 2;
	//printf("%d\n\n", a);
	int* pf;
	pf = &a;
	printf("%p\n", pf);
	printf("%p\n", &a);*/
	
	//********************************************2********************************************
	/*
	int a, b;
	int* lg;
	int* rg;
	lg = &a;
	rg = &b;
	scanf("%d%d", &a, &b);
	printf("\n");
	int c;
	c = *lg + *rg;
	printf("%d", c);
	*/
	//********************************************3********************************************
	/*
	int a,b;
	int* pa;
	int* pb;
	pa = &a;
	pb = &b;
	scanf("%d%d", pa, pb);
	printf("\n");
	int c;
	int* pc;
	pc = &c;
	*pc = *pa + *pb;
	printf("%d", c);
	*/
	//********************************************4********************************************
	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	/*
	int mas[4];
	int* pf;
	pf=&mas[0];
	
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", pf++);
	}
	
	pf=&mas[0];
	
	for (int i = 0; i < 4; i++)
	{
		printf("%4d", *pf++);
	}
	*/
	
	//********************************************5********************************************
	
/*	int* pf;
	pf = (int*)malloc(sizeof(int));
	//printf("%d", sizeof(double));
	*pf = 7;
	printf("%d", *pf);
*/
	
/*	int* pf;
	pf = (int*)malloc(sizeof(int));
	*pf = 7;
	printf("%4d", *pf);
	pf++;
	*pf = 10;
	printf("%4d", *pf++);
*/

	//********************************************6********************************************
	
/*	int* pf;
	pf = (int*)malloc(sizeof(int));
	*pf = 7;
	printf("Zn1 - %d \n", *pf);
	free(pf);
	printf("Zn2 - %d \n", *pf);
*/

	//********************************************7********************************************
	//analize
	/*
	int* pf;
	pf = (int*)malloc(sizeof(int));
	
	for (int i = 0; i<10000; i++)
	{
		printf("%10d", *pf++);
	}
	*/

	//********************************************8********************************************
/*	
	struct people{
		int age;
		char sex;
//		char name[6];
	};
	
	people vasya;
	
	vasya.age=21;
	vasya.sex='m';
//	vasya.name='Vasya'
	
	printf("Age - %d\nSex - %c", vasya.age, vasya.sex);
*/

	//********************************************9********************************************
	
	struct people{
		int age;
		char sex;
//		char name[6];
	};
	
	people vasya;
	
	vasya.age=21;
	vasya.sex='m';
	
	printf("%d\n\n", sizeof(vasya));
	
	people* pl;
	pl = (people*)malloc(sizeof(vasya));
	
	pl->age = 25;
	pl->sex = 'f';
	printf("Age - %d\nSex - %c\n\n", pl->age, pl->sex);
	
	pl = (people*)malloc(sizeof(vasya));
	
	pl->age = 19;
	pl->sex = 'm';
	printf("Age - %d\nSex - %c\n\n", pl->age, pl->sex);
	
	
	//********************************************END********************************************
}
