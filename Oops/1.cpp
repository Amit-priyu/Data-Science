#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000003;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> A(N);
        unordered_map<int, int> freq;
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            freq[A[i]]++; 
        }
        long long result = 0;
        for (auto& p1 : freq) {
            for (auto& p2 : freq) {
                int x = p1.first; 
                int y = p2.first; 
                int count1 = p1.second;
                int count2 = p2.second;
                result += 1LL * (x / y) * count1 * count2;
                result %= MOD;
            }
        }
        cout << result << "\n";
    }
    return 0;
}
