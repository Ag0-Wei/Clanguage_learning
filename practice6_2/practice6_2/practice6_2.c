#include<stdio.h>
int prime(int i)
{
	int j;
	if(i==1)
		return 0;
	for (j=2;j<i;j++)
	{
		if(i%j==0)
			return 0;
	}
	return i;
}
int main ()
{
	int n,sum=0,i;
	printf("请输入n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(prime(i))
			sum+=i;
	}
	printf("1~%d素数和为%d",n,sum);
	return 0;
}