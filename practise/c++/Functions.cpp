#include <stdio.h>
int max_of_four(int &a,int &b,int &c,int &d);
int main()
{
    int a,b,c,d,big_of_four;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    big_of_four=max_of_four(a,b,c,d);
    printf("%d",big_of_four);
}

int max_of_four(int &a,int &b,int &c,int &d)
{
    int big=a;
 if(a<b && b>c && b>d){
        big=b;
    }
    else if(b<c && c>d)
    {
        big=c;
    }
    else if(c<d&& d>a &&d>b &&d>a)
    {
        big=d;
    }
    return big;
}