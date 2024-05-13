#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
int n = 7; // Change this value to adjust the number of rows
for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
        int distance = std::min({i, j, n - i - 1, n - j -1});
        int value = n - distance;
        std::cout << value << " ";
}
std::cout << "\n";
}
return 0;
}