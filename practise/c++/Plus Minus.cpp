#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	double sum_zero=0,sum_neg=0,sum_pos=0;;
	int array[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&array[i]);
		
		if(array[i]>0)
		{
			sum_pos++;
		}
		else if(array[i]<0)
		{
			sum_neg++;
		}
		else if(array[i]==0)
		{
			sum_zero++;
		}
	}
	sum_pos=sum_pos/n;
	printf("%lf\n",sum_pos);
		sum_neg=sum_neg/n;
	printf("%lf\n",sum_neg);
		sum_zero=sum_zero/n;
	printf("%lf",sum_zero);
}
