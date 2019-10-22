#include <iostream>
#include <memory.h>

using namespace std;

typedef long long ll;

const int N = 100001;
const int A = 'z' - 'a' + 1;
const ll MOD = (ll) 1e9 + 7;

ll power(ll x, ll y) {
    if (y == 0) {
        return 1;
    }
    if (y & 1) {
        return power(x, y - 1) * x % MOD;
    } else {
        ll tmp = power(x, y / 2);
        return tmp * tmp % MOD;
    }
}

ll fact[N], rfact[N];

int n, q;
char s[N];
int cnt[N][A];

ll calc(int l, int r) {
    int sum = 0;
    int odd = 0;
    ll res = 1;
    for (int i = 0; i < A; i++) {
        int cur = cnt[r][i] - cnt[l - 1][i];
        sum += cur / 2;
        res = res * rfact[cur / 2] % MOD;
        if (cur % 2 == 1) {
            odd++;
        }
    }
    res = res * max(1, odd) % MOD;
    res = res * fact[sum] % MOD;
    return res;
}

int main() {
    fact[0] = 1;
    rfact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = fact[i - 1] * i % MOD;
        rfact[i] = power(fact[i], MOD - 2);
    }
    
    memset(cnt, 0, sizeof cnt);
    
    scanf("%s %d", s, &q);
    n = strlen(s);
    for (int i = 0; i < n; i++) {
        cnt[i + 1][s[i] - 'a']++;
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < A; j++) {
            cnt[i][j] += cnt[i - 1][j];
        }
    }
    
    for (int i = 0; i < q; i++) {
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%d\n", (int) calc(l, r));
    }
}
