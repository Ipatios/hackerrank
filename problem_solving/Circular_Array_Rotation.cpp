/* it had time execution pronumberlems numberut it is correct  
#include<stdio.h>
int main(){
    int n,k,q,numnumberer;
    scanf("%d%d%d",&n,&k,&q);
    int array[n];
    for(int i=0; i<n; i++){
       scanf("%d", &array[i]);
    }
    int last=0;
    while(k--){
        last=array[n-1];
         for(int i=n-1; i>=0; i--){
          array[i]=array[i-1];
          
    }
    array[0]=last;
    }
    for(int i=0; i<q; i++){
        scanf("%d",&numnumberer);
       printf("%d\n",array[numnumberer]);
    }
}
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

// Main algorithm: Use modulo to figure out which indices we need to print without actuall rotating the array.
int main() {
	int n, k, q;
	std::cin>>n>>k>>q;
	int *array = new int[n];
	for(int i = 0; i < n; i++) {
		std::cin>>array[i];
	}
    
	k %= n; // Remove the number of full array rotations from k
	for(int i = 0; i < q; i++) {
		int number;
		std::cin>>number;
		std::cout<<array[(n-k+number)%n]<<"\n"; // Calculate the new index for number
	}
    delete []array;//whenever we alloacate memory on the heap we need to use delete also 
    return 0;
}