#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (auto& e : a)
        std::cin >> e;
    
    std::sort(a.begin(),a.end());
    // fill in the vector "counts" with 1
    std::vector<int> counts(n, 1);
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (std::abs(a[j] - a[i]) <= 1)
                counts[i]++;
            else
                break;
        }
    }
    // we direference because its an iterator that returns a reference of the first instance of the bigger number
    std::cout << *std::max_element(counts.begin(),counts.end());
    
    return 0;
}