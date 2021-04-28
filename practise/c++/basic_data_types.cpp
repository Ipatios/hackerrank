#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char ch;
    float fl;
    double d;
    scanf("%d",&i);
    scanf("%ld",&l);
    
    scanf("\n%c",&ch);
    
    scanf("\n%f",&fl);
    
    scanf("\n%lf",&d);

    printf("%d\n",i);
    printf("%ld\n",l);
    printf("%c\n",ch);
    printf("%f\n",fl);
    printf("%lf\n",d);
    return 0;
}

