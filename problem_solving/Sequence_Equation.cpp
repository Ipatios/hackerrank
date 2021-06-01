#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int p[n];
    for(int i=1; i<=n; i++){
        int k;
        std::cin >> k;
        p[k]=i;
    }
    for(int i=1;i<=n;i++){
        std::cout << p[p[i]] << std::endl;
    }
    return 0;
}