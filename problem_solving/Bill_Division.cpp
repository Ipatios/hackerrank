#include<stdio.h>
#include<iostream>
#include<vector>

void bonAppetit(std::vector<int> bill, int Anna, int b) {
    int total = 0;
    for(int i = 0; i < bill.size(); i++){
        total += bill[i];
    }
    total = (total - bill[Anna])/2;
    if(total == b){
        std::cout << "Bon Appetit" << std::endl;
    }else{
        std::cout << b - total << std::endl;
    }
    
}
int main(){
    int n,b,Anna;
    
    std::cin>>n;
    std::cin>>Anna;
    std::vector<int> bill(n);
   for(int i=0; i<n; i++){
       std::cin>>bill[i];
   }
    std::cin>>b;
    bonAppetit(bill,Anna,b);
    
}