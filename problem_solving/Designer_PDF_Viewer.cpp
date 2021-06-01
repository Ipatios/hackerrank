#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include<cmath>
#define NUM 31
int main(){
    int height[26];
    for(int i=0; i<26; i++){
     std::cin>>height[i];
    }
    std::string c;
    std::cin>>c;
    std::vector<int> EndResult;
   
     for (int i = 0; i < c.length(); i++) {
        // Performing AND operation
        // with number 31
        EndResult.push_back(height[(c[i] & NUM)-1]);
    }
   sort(EndResult.begin(),EndResult.end());
   std::cout<<c.length() * EndResult.back()<<std::endl;
    }
