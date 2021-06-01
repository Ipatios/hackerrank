#include <stdio.h>

int main()
{
	int i,j,n,array[100][100];
	int sum,sum2;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
	for(j=0; j<n; j++)
	{
		scanf("%d",&array[i][j]);
		if(i==j)
		{
			sum+=array[i][j];
		}
		}	
	}
	i=0;
	j=n-1;
	sum2=0;
	//do
	while(j>=0)
	{
		
		sum2+=array[i][j];
		j--;
		i++;
	}

	if(sum>sum2)
	{
		sum=sum-sum2;
		printf("%d",sum);
	}
	else
	{
		sum2=sum2-sum;
		printf("%d",sum2);
	}
}
/*int main() {
    int n,ar[100][100],left = 0,right = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ar[i][j];
            if(i==j){
				left+=ar[i][j];
				}
            if(i+j==n-1){
				right+=ar[i][j];
				}
        }
    }
    cout << abs(left-right) << endl;
    return 0;
}*/
