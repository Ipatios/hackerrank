#include<stdio.h>
#include<iostream>
#include <string>
int main(){
    int n,grades[100];
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>grades[i];
        int roundGrade=grades[i];
        while(roundGrade%5!=0){
            roundGrade++;
        }
        if(roundGrade>=40 && roundGrade-grades[i]<3){
            grades[i]=roundGrade;
        }
        
    }
   for(int i=0; i<n; i++){
       std::cout<<grades[i]<<std::endl;
   } 
}