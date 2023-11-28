#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x, y, elem;
    set<int> s;
    cin >> n;
    cin >> x;
    while(x--){
        cin >> elem;
        s.insert(elem);
    }
    cin >> y;
    while(y--){
        cin >> elem;
        s.insert(elem);
    }
    cout << (s.size() == n ? "I become the guy.":"Oh, my keyboard!") << endl;
}

int main()
{
    int test_cases = 1;
    //cin >> test_cases;
    while(test_cases--)solve();
    return 0;
}
