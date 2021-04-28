#include <iostream>
#include <cstdio>
using namespace std;
void elements(int &a,int &kai_kala_b,int &kai_kala_a,int &b);
int main() {
    int a,i,b,kai_kala_a,kai_kala_b;
    scanf("%d",&a);
    scanf("%d",&b);
    kai_kala_b=b;
    if(a>=b)
    {
        printf("error");
        return 0;
    }
    if(b>9)
    {
        b=9;
    }
    kai_kala_a=a;
    

    for(i=0; i<b; i++)
    {
         if(a==1)
    {
        printf("one\n");
    }else if(a==2){
        printf("two\n");
    }
    else if(a==3){
        printf("three\n");
    }
      else if(a==4){
        printf("four\n");
    }
      else if(a==5){
        printf("five\n");
    }
      else if(a==6){
        printf("six\n");
    }
      else if(a==7){
        printf("seven\n");
    } 
          else if(a==8){
        printf("eight\n");
    } else if(a==9){
        printf("nine\n");
    }
    a++;
    }

       elements(a,kai_kala_b,kai_kala_a,b);
    return 0;
}




void elements(int &a,int &kai_kala_b,int &kai_kala_a,int &b)
{
    int i;

    
    kai_kala_a=10;    
    for(i=9; i<kai_kala_b; i++)
{
if(kai_kala_a%2==0)
    {
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
    kai_kala_a++;    
}    
    }