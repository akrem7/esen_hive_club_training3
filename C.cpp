#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
         s.insert(x);
    }
    cout << (s.size()==1?"NO":to_string(*(++s.begin()))) << endl;
    return 0;
}
