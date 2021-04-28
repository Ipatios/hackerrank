#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n,num,x,a,b;
    std::vector<int>v;
    std::cin>>n; 
    for(int i=0; i<n; i++){
        std::cin>>num;
        v.push_back(num);
    } 
    
    std::cin>>x;
    std::cin>>a>>b;
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    std::cout<<v.size()<<std::endl;
    for(int i=0; i<v.size(); i++){
        std::cout<<v[i]<<" ";
    }
}