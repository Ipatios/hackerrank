#include <stdio.h>
int main()
{
	int s,t,a,b,m,n,apples[100],oranges[100];
	scanf("%d",&s);
	scanf("%d",&t);
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&m);
	scanf("%d",&n);
	int apples_hit=0,oranges_hit=0;
	for(int j=0; j<m; j++)
	{
		scanf("%d",&apples[j]);
			a=a+apples[j];
			if(a>=s || a<=t)
			{
				apples_hit++;
			}
	}
		for(int k=0; k<n; k++)
	{
		scanf("%d",&oranges[k]);
			b=b+oranges[k];
			if(b>=s || b<=t)
			{
				oranges_hit++;
			}
	}
	printf("%d",apples_hit);
	printf("%d",oranges_hit);
	
}
