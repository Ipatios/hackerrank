#include<iostream>
int main(){
    int t,n,k;
    std::cin>>t;
    for(int i=0; i<t; ++i){
        std::cin>>n>>k;
        int hour=0,number=0;
for(int j=0; j<n; j++){
    std::cin>>hour;
    if(hour<=0){
        number++;
    }
}
if(number>=k){
    std::cout<<"NO"<<std::endl;
}else{
    std::cout<<"YES"<<std::endl;
}
    }
}