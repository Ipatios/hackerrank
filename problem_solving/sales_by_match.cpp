#include <iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
void sockMerchant(int numberSocks,std::vector<int> allSocks){

int pairs=0;
for(int j=0; j<numberSocks; j++){
    int count=1;
    for(int i=0; i<numberSocks; i++){
        if(allSocks[j]==allSocks[i] && j!=i && allSocks[j]!=0 && allSocks[i]!=0){
            count++; 
            allSocks[j]=0;
            allSocks[i]=0;
           if((count % 2)==0){
          pairs++;
        } 
        }
    }
}
std::cout<<pairs;
}

int main(){
    int numberSocks;
    std::vector<int>allSocks;
    std::cin>>numberSocks;
    for(int i=0; i<numberSocks; i++){
        int x;
        std::cin>>x;
        allSocks.push_back(x);
    }
    sockMerchant(numberSocks,allSocks);
}