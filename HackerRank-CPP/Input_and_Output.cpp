//Read 3 numbers from stdin and print their sum to stdout.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num1, num2, num3, result;
    
    cin>>num1;
    cin>>num2;
    cin>>num3;
    
    result = num1+num2+num3;
    
    cout<<result;
    return 0;
}
