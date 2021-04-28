#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int a,b,c,sum;
   scanf("%d",&a);
    scanf("%d",&b);
     scanf("%d",&c);
     if(a<1&&b<1&&c<1&&a>1000&&b>1000&&c>1000)
     {
         printf("error");
         return 0;
     }else{
         sum=a+b+c;
         printf("%d",sum);
     }
    return 0;
}
