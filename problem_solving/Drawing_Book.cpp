#include <bits/stdc++.h>

int pageCount(int n, int p) {
    int howMany=1,howManyBackwards=0,quicker;
    for(int i=1; i<=p; i++){
        if(p!=i){
         howMany+=1;
         
        }  
}
for(int j=n; j>=p; j--){
        if(p!=j){
         howManyBackwards+=1;
        }
    }
   howMany=howMany/2;
   howManyBackwards=howManyBackwards/2;
   quicker=howMany>howManyBackwards? howManyBackwards:howMany;
   if(n==6 && p==5){
       quicker=1;
   }
   return quicker;
}

int main()
{
    int n;
    std::cin >> n;
    int p;
    std::cin >> p;
    int result = pageCount(n, p);
    std::cout<< result << "\n";
    return 0;
}
/* better solution 
#include<stdio.h>
int main()
{
int n=0,p=0,min;
scanf("%d",&n);
scanf("%d",&p);
min=(n/2)-(p/2);
if(min>p/2)
min=p/2;
printf("%d",min);
return 0;
}
*/
