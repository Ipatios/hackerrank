#include <stdio.h>
void new_elements(int *alpha,int *bita);
int main()
{
    int a,b,c,d,big_of_four;
    scanf("%d",&a);
    scanf("%d",&b);
    new_elements(&a,&b);
    
}

void new_elements(int *alpha,int *bita)
{
    int a;
    a=*alpha;
    *alpha=*alpha+*bita;
    if(*bita>a)
    {
    *bita=*bita-a;    
    }
    else{
    *bita=a-*bita;    
    }
    
    printf("%d\n",*alpha);
    printf("%d",*bita);
}