#include<bits/stdc++.h>
using namespace std;
//find first prime
// int fPrime(vector<int> &arr){
//     for(int i=0;i<arr.size();i++){
//         if (arr[i] <= 1) continue;
//         if(arr[i] == 2) return i;
//         if(arr[i] == 3) return i;
//         if (arr[i] % 2 == 0 || arr[i] % 3 == 0) {
//             continue;
//         } 
//         // Iterate from 5 up to the square root of n
//         // We only need to check divisibility by numbers of the form 6k ± 1
//         for (int j = 5; j * j <= arr[i]; j = j + 6) {
//             if (arr[i] % j == 0 || arr[i] % (j + 2) == 0) {
//                 continue;
//             }
//         }
//         return i;
//     }
//     return 0;
// }
// //iterate and mark all mutiples of first prime Number
// void mark(vector<int> &arr, int firstidx){
//     //mark -1
//     for(int i=firstidx+1;i<arr.size();i++){
//         if(arr[i] % arr[firstidx] == 0){
//             arr[i] = -1;
//         }
//     }
// }
// int main(){
//     vector<int>arr = {2,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//     int firstPrimeIdx = fPrime(arr);
//     cout<<firstPrimeIdx<<endl;
//     //edge case
//     for(int i=0;i<firstPrimeIdx;i++){
//         arr[i] = -1;
//     }
//     //start marking multiples
//     while(firstPrimeIdx<arr.size()){
//         if(arr[firstPrimeIdx] != -1){
//             mark(arr, firstPrimeIdx);
//         }
//         firstPrimeIdx++;
//     }
//     for(auto ele:arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     cout<<"All prime numbers are:"<<endl;
//     for(auto ele:arr){
//         if (ele != -1) cout<<ele<<" ";
//     }
//     cout<<endl;

//     return 0;
// }

vector<int> sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);
    // 0 and 1 are not prime numbers
    isPrime[0] = isPrime[1] = false;
    
    // Iterate up to the square root of n
    for (int p = 2; p * p <= n; ++p) {
        // If isPrime[p] is not changed, then it is a prime
        if (isPrime[p]) {
            // multiples which are less than p*p are already been marked.
            // i = 2, 4, 6, 8, 10
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    // Store all prime numbers in a vector
    vector<int> primes;
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }
    return primes;
}

int main() {
    int n;

    cout << "Enter the upper limit: ";
    cin >> n;

    vector<int> primeNumbers = sieveOfEratosthenes(n);

    cout << "Prime numbers up to " << n << " are: ";
    for (int prime : primeNumbers) {
        cout << prime << " ";
    }
    cout <<endl;

    return 0;
}