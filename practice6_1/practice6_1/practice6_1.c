#include <stdio.h>
int psum(int n)
{
	int sum=0,i;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
int main ()
{
	int i;
	for(i=1;i<=20;i++)
		printf("Sn(%d)=%d\n",i,psum(i));
	return 0;
}