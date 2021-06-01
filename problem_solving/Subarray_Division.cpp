#include<iostream>

int main(){
    int n,s[100];
    int d,m;
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>s[i];
    }
    std::cin>>d;
    std::cin>>m;
    
    
        int allSums=0;
for(int i=0; i<n; i++){
    int sum=0;
    for(int j=i; j<m; j++){
     sum+=s[j];
    }
    if(sum==d){
     allSums++;
    }
   m++; 
}
std::cout<<allSums;
}