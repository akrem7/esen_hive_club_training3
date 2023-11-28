#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lp(i,n) for(int i = 0; i < n; i++)
#define rep(i,a,b) for(int i = a; i <= b; i++)
#define invrep(i,a,b) for(int i = a; i >= b; i--)
#define pb(a) push_back(a)
#define mp make_pair
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(v) v.begin(),v.end()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define line cout<<endl
#define EPS 0.0000000001
#define PI 3.14159265358979323846
#define DEC greater<int>()
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<ii> vii;
void eyle(bool value){cout<<(value?"YES":"NO")<<"\n";}
template <typename T>void out(vector<T> v){for(auto x:v)cout << x << " ";line;}
ll sum_n(ll n){return (ll)n*(n+1)/2;}
double my_log(int base, ll N){return (double)log(N)/log(base);}
ll gcd(ll a, ll b){if(!b)return a;return gcd(b, a % b);}
ll gcd(vi v){ll g = v[0];rep(i,1,sz(v)-1)g = gcd(g,v[i]);return g;}
ll lcm(int a,int b){return (ll)a*b / gcd(a,b);}
ll lcm(vi v){ll ans = v[0];rep(i,1,sz(v)-1)ans = ((ll)((v[i]*ans))/(gcd(v[i],ans)));return ans;}
//choose k from n:
ll C_kn(ll k, ll n){ll res = 1;if(k>n-k)k=n-k;for(ll i=0;i<k;++i){res*=(n-i);res/=(i+1);}return res;}
const int INF = INT_MAX;
ll MOD = 998244353;
const int N = 500+1;
int ctoi(char c){
    return c - '0';
}
bool costum(const ii &a, const ii &b){
    if(a.F == b.F)return a.S < b.S;
    return a.F < b.F;
}
int cpd(long double a,long double b){return fabs(a-b)<=EPS?0:a-b>0?1:2;}

void solve(int _){
   int n;
   cin >> n;
   vector<int> v(n);
   for(int i = 0; i< n; i++)cin >> v[i];
    long long ans = 0;
   priority_queue<int> bonus;
   for(int i = 0; i < n; i++){//O(n²) => 25.10^10
        if(v[i]==0){
            if(bonus.empty())continue;
            ans+= bonus.top(); // O(1)
            bonus.pop();//O(1);
        }
        else bonus.push(v[i]);
    }
    cout << ans << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif // ONLINE_JUDGE
    int t = 1;
    cin>>t;
    lp(i,t)solve(i+1);
    return 0;
}
