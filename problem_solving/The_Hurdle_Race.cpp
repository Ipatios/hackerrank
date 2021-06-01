#include <cmath>
#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    
    int array, max = 0;
    while (n--) {
        std::cin >> array;
        max = std::max(max, array);
    }

    std::cout << (max <= k ? 0 : max - k) <<'\n';
    return 0;
}