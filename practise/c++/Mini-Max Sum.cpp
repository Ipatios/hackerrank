#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>//For using sort element
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long a[5];
    long long sum = 0;
    for(int i = 0; i < 5; i++)
   {
        cin >> a[i];
        sum += a[i];
    }
    
    sort(a, a+5);//Sorting Elements(oysiastika ta vazei stin seira apo to mikrotero sto megalitero)
    cout << sum - a[4] << " " << sum - a[0] << endl;
    return 0;
}
