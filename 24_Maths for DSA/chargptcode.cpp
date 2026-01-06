#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    long long left, right; // ✅ changed int to long long
    cout << "Enter the left range and right range: ";
    cin >> left >> right;

    // 1️⃣ Handle left = 1
    if(left < 2) left = 2; // ✅ added, 1 is not prime

    // 2️⃣ Generate numbers in range (optional, not really needed)
    // vector<long long> arr;  // ❌ removed, saves memory

    // 3️⃣ Generate primes up to sqrt(right)
    vector<long long> ans;
    long long primeRange = sqrt(right);
    for(long long i = 2; i <= primeRange; i++) {
        bool isPrime = true;
        for(long long j = 2; j*j <= i; j++) { // ✅ faster check up to sqrt(i)
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            ans.push_back(i);
        }
    }

    // 4️⃣ Boolean array for segment
    long long n = right - left + 1;
    vector<bool> prime(n, true); // ✅ long long size

    // 5️⃣ Mark multiples of small primes in the range
    for(long long i = 0; i < ans.size(); i++) {
        long long p = ans[i];
        long long start = max(p*p, ((left + p - 1)/p) * p); // ✅ mark multiples starting from first >= left
        for(long long j = start; j <= right; j += p) {
            prime[j - left] = false; // ✅ avoid marking the prime itself
        }
    }

    // 6️⃣ Print primes
    for(long long i = 0; i < n; i++) {
        if(prime[i]) {
            cout << (i + left) << " ";
        }
    }

    return 0;
}
