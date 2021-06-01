#include<iostream>
int main(){
    int t,n;
    std::cin>>t;
    for(int i=0; i<t; ++i){
        int height=0;
        std::cin>>n;
        for(int j=0; j<=n; j++){
          if(j%2==0 || j==0){
             height++;
        }else if(j%2!=0){
         height+=height;
        }
        }
        std::cout<<height<<std::endl;
        
    }
}
