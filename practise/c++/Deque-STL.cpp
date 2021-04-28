#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	
	/*int arr[n];
	for(int i=0; i<n; i++){
		int max=arr[i];
		for(int j=i; j<k; j++){
        if(max<arr[j]){
			max=arr[j];

		}
		}
		cout<<max;
	} */
	 deque<int> q;
    int i;
    
    for(i=0; i<k; i++)//we are looping over the first subarray and with q we are keeping tabs of the biggest element 
    {
        while(!q.empty() && arr[i]>=arr[q.back()])
  {
            q.pop_back();
        }
        q.push_back(i);
    }
    
    for(i=k; i<n; i++)
 {
        cout<<arr[q.front()]<<" ";
        
        while(!q.empty() && q.front()<=i-k)//finishes the old subarray if needed and pops the front of the old subarray 
  {
            q.pop_front();
        }
        //our back is the smallest element and front the biggest
         while(!q.empty() && arr[i]>=arr[q.back()])//pops back if element in array is bigger
  {
            q.pop_back();
        }
        q.push_back(i);//pushes the element ether in front or back(depends if its the big or small)
        
    }
    cout<<arr[q.front()]<<endl;
  
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}