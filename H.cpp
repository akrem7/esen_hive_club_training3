#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long k, n, q, l, r;
    cin >> n >> q;
    vector<long long> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    for(int i = 1; i < n; i++)v[i]+=v[i-1];
    long long sum;
    vector<int> odd;
    while(q--){
        cin >> l >> r >> k;
        sum = v.back() - (v[r-1]-(l==1?0:v[l-2])) + (r-l+1)*k;
        odd.push_back(sum%2);
    }
    for(auto is_odd:odd){
        cout << (is_odd?"YES":"NO") << endl;
    }

}

int main()
{
    int test_cases = 1;
    cin >> test_cases;
    while(test_cases--)solve();
    return 0;
}
