#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n,num,q;
    std::vector<int>v;
    std::cin>>n; 
    for(int i=0; i<n; i++){
        std::cin>>num;
        v.push_back(num);
    } 
    sort(v.begin(),v.end());
    num=0;
    std::cin>>q;
    for(int i=0; i<q; i++){
        std::cin>>num;
        std::vector<int>::iterator low1;
        low1=std::lower_bound (v.begin(), v.end(), num);
        if(v[low1 - v.begin()] ==num){
            std::cout<<"Yes"<<" "<<low1 - v.begin()+1<<std::endl;
        }else{
            std::cout<<"No"<<" "<<low1 - v.begin()+1<<std::endl;
        }
     
    }
}