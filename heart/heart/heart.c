#include<stdio.h>
int main()
{
	char star='*',space=' ';
	int i,j;
	int num1,num2;

	printf(" **   **\n**** ****\n");

	for(i=0;i<9;i++)
	{
		num1=i,num2=9-2*i;
		for(j=0;j<num1;j++)
			putchar(space);
		for(j=0;j<num2;j++)
			putchar(star);
		printf("\n");
	}

	return 0;
}