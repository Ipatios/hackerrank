#include<iostream>
#include<vector>
#include <bits/stdc++.h>
int main(){
    int b,n,m,max=0;
    std::cin>>b>>n>>m;
    std::vector<int> keyboard;
    std::vector<int> drives;
    
    for(int i=0; i<n; i++){
        int input;
        std::cin>>input;
        keyboard.push_back(input);
    }
    for(int i=0; i<m; i++){
        int input1;
        std::cin>>input1;
        drives.push_back(input1);
    }
    std::sort(keyboard.begin(),keyboard.end());
    std::sort(drives.begin(),drives.end());

    if(keyboard.size()>drives.size()){
        for(int i=0; i<keyboard.size(); i++){
            for(int j=0; j<drives.size(); j++){
                if(b>=keyboard[i]+drives[j]){
                  max=(max<keyboard[i]+drives[j])? (keyboard[i]+drives[j]):max;  
                }
              
            
            }
        }
    }else{
        for(int i=0; i<drives.size(); i++){
            for(int j=0; j<keyboard.size(); j++){
                if(b>=keyboard[j]+drives[i]){
                   max=(max<keyboard[j]+drives[i])? (keyboard[j]+drives[i]):max;
                }
            }
        }
    }
    if(max!=0){
     std::cout<<max;   
    }else{
        std::cout<<-1;
    }
    
}