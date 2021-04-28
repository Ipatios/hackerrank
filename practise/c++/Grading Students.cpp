#include <stdio.h>
int main()
{
	int n,grades[n],round_grades[n];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&grades[i]);
		round_grades[i]=((grades[i] + 4) / 5) * 5;
		if(round_grades[i]-grades[i]<3 && grades[i]>40)
		{
		grades[i]=round_grades[i];	
		}
	}
	for(int j=0; j<n; j++)
	{
		printf("\n%d",grades[j]);
	}
	
}
