#include<stdio.h>
int main ()
{
	char sen[80],*ptr;
	int n=0,k1=0,k2=1;
	printf("请输入一个句子 ");
	gets(sen);
	ptr=sen;
	do
	{
		if(*ptr>='A'&&*ptr<='z')
			k1=1;
		if(*ptr==' ')
			k2=1;
		if(k1&&k2)
		{
			n++;
			k1=0,k2=0;
		}
		ptr++;
	}while(*ptr!='\0');
	printf("该句子中有%d个单词",n);
	return 0;
}