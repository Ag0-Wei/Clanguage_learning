#include<stdio.h>
int main ()
{
	int num[3][6]={{1,3,2,45,33,26},{13,25,63,444,344,645},{525,64,77,6,3,4}};
	int i,j,*max,*ptr,row,column,ii;
    ptr=&num[0][0],max=ptr;
	for(i=0;i<18;i++)
	{
		if(*(ptr+i)>*max)
			max=ptr+i;
	}
	ii=max-ptr;
	row=ii/6;
	column=ii%6;
	printf("%d",*max);
	printf("该数位于%d行%d列",row+1,column+1);
	return 0;
}