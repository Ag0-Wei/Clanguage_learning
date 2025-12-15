#include <stdio.h>
int big(int a,int b)
{
	int max;
	max=a;
	if(b>a)
		max=b;
	return max;
}