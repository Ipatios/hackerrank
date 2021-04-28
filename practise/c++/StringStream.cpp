#include <sstream>
#include <vector>
#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

vector<int> parseInts(string str) {
    stringstream iss(str);
    vector<int>output;
    int numbers;
    char ch;
    while (iss >> numbers)
    {
        output.push_back(numbers);
        iss >> ch;
    }
    return output;
    
    
}

int main() {
    string str;
    cin>>str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}