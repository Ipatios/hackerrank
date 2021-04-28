#include <stdio.h>

int main()
{
	int n,max=0,same_elements=1;
	scanf("%d",&n);
	int candles[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&candles[i]);
		if(candles[i]>max)
		{
			max=candles[i];
		}
		else if(candles[i]==max)
		{
			same_elements++;
		}
	}
	printf("%d",same_elements);
}
