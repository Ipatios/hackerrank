#include<iostream>
int main(){
    int n,k,arr[100],count=0;
    std::cin>>n;
    std::cin>>k;
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i]+arr[j])%k==0)
              count++;  
            
            
        }
    }
    std::cout<<count;
}