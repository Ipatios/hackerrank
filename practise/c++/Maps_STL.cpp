#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>



int main() {
     int q,y,type;
     std::string x;
     std::map<std::string,int> map;
     std::cin>>q;
     for(int i=0; i<q; i++){
         std::cin>>type;
         if(type==1){
            std::cin>>x;
            std::cin>>y;
         map[x]+=y; 
         }else if(type==2){
           std::cin>>x;
             map.erase(x);  
         }else{
             std::cin>>x;
             if (map[x]>0)
             {
                std::cout<<map[x]<<std::endl; 
             }else{
                 std::cout<<0<<std::endl;
             }
             
            
         }
         
     }
}

