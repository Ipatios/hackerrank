#include<iostream>
int main(){
    std::string path;
    int SeaLevel=0,HikerLevel=0,valleys=0,steps;
    std::cin>>steps;//just to pass tests 
    std::cin>>path;
    for(char ch:path){
        if(ch=='D'){
            HikerLevel--;
        }else{
            HikerLevel++;
        }
        // we need (ch=='U') and (HikerLevel==Sealevel) to know where the valley ends 
        if(HikerLevel==SeaLevel && ch=='U'){
        valleys++;
        }
    }
    std::cout<<valleys;
}