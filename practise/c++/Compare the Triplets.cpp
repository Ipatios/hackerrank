#include <stdio.h>
int main()
{
	int a[3],b[3],i,sumA=0,sumB=0,teliko[3];
	for(i=0; i<3; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<3; i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0; i<3; i++)
	{
		if(a[i]>b[i])
		{
			sumA++;
		}
		else if(b[i]>a[i])
		{
			sumB++;
		}
	}
	teliko[0]=sumA;
	teliko[1]=sumB;
	printf("%d %d",teliko[0],teliko[1]);
}
