#include<stdio.h>
int main ()
{
	char str1[50]="hello",str2[50]="world";
	char *ptr1,*ptr2;
	ptr1=str1,ptr2=str2;
	while(*ptr1)
		ptr1++;
	while(*ptr1=*ptr2)
		ptr1++,ptr2++;
	printf("%s",str1);
	return 0;
}