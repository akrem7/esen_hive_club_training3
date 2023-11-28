#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s, h = "heidi";
    cin >> s;
    int cnt = 0;
    for(char c: s){
        if(c == h[cnt])cnt++;
        if(cnt == 5){
            cout << "YES"  << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int test_cases = 1;
    //cin >> test_cases;
    while(test_cases--)solve();
    return 0;
}
