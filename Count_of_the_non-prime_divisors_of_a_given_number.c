#include <bits/stdc++.h>
using namespace std;

int prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            if (prime(i) == 0) cnt++;
        }
    }
    cout << (cnt+1);
}