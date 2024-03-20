#include<iostream>
using namespace std;

int findFacto(int n) {
    int facto = 1;
    for(int i = 1; i <= n; i++) { 
        facto *= i;
    }
    return facto;
}

int main() {
    int n, r;
    cout << "Enter n & r :: ";
    cin >> n >> r;

    if (r > n) { 
        cout << "Invalid input: r cannot be greater than n";
        return 1;
    }

    int ans = findFacto(n) / (findFacto(r) * findFacto(n - r)); 
    cout << "The value of nCr = " << ans;

    return 0;
}
