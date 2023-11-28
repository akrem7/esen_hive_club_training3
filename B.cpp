#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    vector<int> ex(3,0);
    for(int i = 1; i <= n; i++){
        cin >> x;
        ex[0]+=(i%3==1)*x;
        ex[1]+=(i%3==2)*x;
        ex[2]+=(i%3==0)*x;
    }
    int mx = max_element(ex.begin(), ex.end())-ex.begin();
    cout << (mx == 0? "chest":mx == 1?"biceps":"back") << endl;
    return 0;
}
