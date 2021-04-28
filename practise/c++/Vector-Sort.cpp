#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n,num;
    std::vector<int>v;
    scanf("%d",&n); 
    for(int i=0; i<n; i++){
        scanf("%d",&num);
        v.push_back(num);
    } 
    
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        std::cout<<v[i]<<" ";
    }
    return 0;

}
