#include<iostream>

int main() {
  int t;
  std::cin>>t;
  for (int i; i < t; i++) {
    int n, m, s;
    std::cin>>n>>m>>s;

    int res = ((m + s - 1) % n);
    if (res == 0) {
        res = n;
    }else
    std::cout<<res<<std::endl;
  }
  return 0;
}