#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	printf("  a   : %d\n",a);
	printf("--a   : %d\n",--a);
	++a;
	printf("  a-- : %d\n",a--);
	++a;
	printf("  a++ : %d\n",a++);
	--a;
	printf("++a   : %d\n",++a);
	
	return 0;
}
/**************************************************************
	Problem: 1252
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

