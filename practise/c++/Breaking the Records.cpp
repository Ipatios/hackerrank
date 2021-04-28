#include <stdio.h>
#include <string.h>
#include <iostream>
int main()
{
	int n,score[100],min,max,count_min,count_max;
	scanf("%d",&n);
	count_min=count_max=0;
	for(int i=0; i<n; i++)
	{
		scanf("%d",&score[i]);
		min=max=0;
		if(min<score[i])
		{
			printf("edo");
		min=score[i];
			count_min++;	
		}
		else if(score[i]>max)
		{
			printf("eko");
		max=score[i];
			count_max++;	
		}
			
		
		
		
	}
	printf("%d %d",count_max,count_min);
}
