/*打印数字菱形
*/
#include<stdio.h>
int main()
{
	char space=' ';
	int i,j,e;
	int cen,num1,k,t;//引用变量

	printf("请输入菱心中心的正整数：");
	scanf("%d",&cen);//输入

	for(i=0;i<cen;i++)//up
	{
		num1=cen-i;
	    for(j=0;j<num1;j++)
	        putchar(space);
		for(k=1;k<i+2;k++)
			printf("%d",k);
		for(t=i;t>0;t--)
			printf("%d",t);
		printf("\n");
	}

	for(e=cen;e<2*cen-1;e++)//down
	{
		num1=e-cen+1;
	    for(j=0;j<=num1;j++)
	        putchar(space);
		for(k=1;k<=2*cen-1-e;k++)
			printf("%d",k);
		for(t=2*cen-2-e;t>0;t--)
			printf("%d",t);
		printf("\n");
	}

	return 0;
}