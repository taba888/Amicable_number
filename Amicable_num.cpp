
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100000;
int sumDiv[MAXN + 1];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    for (int i = 1; i <= MAXN / 2; i++) {
        for (int j = i * 2; j <= MAXN; j += i) {
            sumDiv[j] += i;
        }
    }
    int L, R;
    while (cin >> L >> R) {
        if (L == 0 && R == 0) {
            break;
        }
        int count = 0;
        for (int i = L; i <= R; i++) {
            int j = sumDiv[i];
    
            if (j > i && j >= L && j <= R && sumDiv[j] == i) {
                count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}
