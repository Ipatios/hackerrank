#include <stdio.h>

int main()
{
    int i,N,array[1000];
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&array[i]);
    }
    i=N-1;
    do
    {
        printf("%d ",array[i]);
        i--;
    }while(i>=0);
    
}