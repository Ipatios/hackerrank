#include <iostream>

int reverse(int x) {
  int ret = 0;
  while (x) {
    ret = ret * 10 + x % 10;
    x /= 10;
  }
  return ret;
}

int main() {
  int I, J, k, beautiful = 0;
  std::cin >> I >> J >> k;
  for (int i = I; i <= J; i++) {
    int diff =i - reverse(i);
    if (diff % k == 0) {
      beautiful++;
    }
  }
  std::cout << beautiful << std::endl;
  return 0;
}