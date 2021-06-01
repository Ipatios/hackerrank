#include<iostream>
int viralAdvertising(int n){
int people=5,culc;
for(int i=0; i<n; i++){
    int likes=0;
    if(i==0){
       likes=people/2; 
       culc=likes;
    }else{
        people=(people/2)*3;
        likes=people/2;
        culc+=likes;
    }  
}
return culc;
};
int main(){
    int n;
    std::cin>>n;
    std::cout<<viralAdvertising(n);
}