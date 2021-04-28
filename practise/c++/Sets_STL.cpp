#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

int main() {
    int Q,y,x;
    std::cin>>Q;
    std::set<int> s;
    for(int i=0; i<Q; i++){
        std::cin>>y>>x;
         if(y==1){
          s.insert(x);   
         }else if(y==2){
           s.erase(x);  
         }else{
            std::set<int>::iterator itr=s.find(x);
          if(itr==s.end()){
              std::cout<<"No"<<std::endl;
          }else{
              std::cout<<"Yes"<<std::endl;
          }  
         }
    }
      
    return 0;
}
