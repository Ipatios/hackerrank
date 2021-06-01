#include<iostream>
#include <cstdlib>
int main(){
    int q,x,y,z;
    std::cin>>q;
    while(q--){
        std::cin>>x>>y>>z;
        if(abs(z-x)>abs(z-y)){
            std::cout<<"Cat B"<<std::endl;
        }else if(abs(z-x)<abs(z-y)){
           std::cout<<"Cat A"<<std::endl; 
        }else{
            std::cout<<"Mouse C"<<std::endl;
        }
    }
}