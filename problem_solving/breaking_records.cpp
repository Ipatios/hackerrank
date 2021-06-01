#include<stdio.h>
#include<iostream>
#include<cmath>
int main(){
    long long int n,scores[1001];
    int max_scores,min_scores,maxTotal=0,minTotal=0;
    max_scores=0;
    scanf("%lld",&n);
    
    for(int i=0; i<n; i++){
    scanf("%lld",&scores[i]);
    }
    max_scores=min_scores=scores[0];
    for(int j=0; j<n; j++){
        if(min_scores>scores[j]){
        min_scores=scores[j];
        minTotal++;
    }
    if(max_scores<scores[j]){
        max_scores=scores[j];
        maxTotal++;
    } 
    }
    printf("%d %d",maxTotal,minTotal);
}