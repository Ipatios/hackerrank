#include <stdio.h>
int main()
{
int i,j,a[100],b[100],sum_a,sum_b,end_score[5][5];
sum_a=sum_b=0;
for(i=0; i<3; i++)
{
	scanf("%d",&a[i]);
	if(a[i]<1 && a[i]>100)
	{
		printf("error");
		return 0;
	}
	}
	printf("\n");
	for(i=0; i<3; i++)
{
	scanf("%d",&b[i]);
		if(b[i]<1 && b[i]>100)
	{
		printf("error");
		return 0;
	}
		if(a[i]==b[i])
		{
			sum_a=0; sum_b=0;
		}
		else if(a[i]>b[i])
		{
			sum_a= sum_a+1;
		}
		else 
		{
			sum_b=sum_b+1;
		}
	}	
	/*for(i=0; i<3; i++)
	{
		if(a[i]==b[i])
		{
			sum_a=0; sum_b=0;
		}
		else if(a[i]>b[i])
		{
			sum_a= sum_a+1;
		}
		else 
		{
			sum_b=sum_b+1;
		}
		
		}*/
		
	 end_score[0][0]=sum_a;
	end_score[0][1]=sum_b;		
			
			
		
		printf("%d %d",end_score[0][0],end_score[0][1]);
		return 0;	
}
