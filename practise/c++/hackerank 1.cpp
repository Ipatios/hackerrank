#include <stdio.h>
int main()
{
	int n,i,sum,ar[1000];
	scanf("%d",&n);
	if(n<0)
	{
		printf("error");
		return 0;
	}
	sum=0;
	for(i=0; i<n; i++)
	{
		scanf("%d",&ar[i]);
		sum=sum+ar[i];
		if(ar[i]>1000)
		{
			printf("error");
			return 0;
		}
	}
	printf("%d",sum);
}
