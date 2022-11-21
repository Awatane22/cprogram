#include<stdio.h>
main()
{
	int i,f,n;
	printf("\n Enter The Number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("\n Factorial is=%d",f);
}
