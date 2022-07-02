#include <bits/stdc++.h>
using namespace std;
string sp=" ";
#define ar array
#define vc vector
#define ll int64_t
#define int int64_t
#define mk make_pair 
#define pb push_back
#define gh cout<<endl;
#define hg cerr<<endl;
#define db long double
#define vi vector<int>
#define PII pair<int,int>
#define Umap unordered_map
string yes="YES\n",no="NO\n";
#define Go(A,p) for(auto &p:A)
#define sz(A) ((int)(A.size()))
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define Fo(i,k,n) for(int i=k;i<=n;i++)
#define Ro(i,n,k) for(int i=n;i>=k;i--)
#define Debug(a, n) Fo(i, 0, n-1){w(i, a[i]);}
#define Print_Return(K) {cout << K << endl; return;}
#define Trav(A, P) for(auto P=A.begin(); P!=A.end(); P++)

void __print(int x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(bool x) {cerr << (x ? "true" : "false");}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T, typename V>
void __print(const array<T, 2> &x) {cerr << '{'; __print(x[0]); cerr << ','; __print(x[1]); cerr << '}';}
template<typename T, typename V>
void __print(const array<T, 3> &x) {cerr << '{'; __print(x[0]); cerr << ','; __print(x[1]); cerr << ','; __print(x[2]); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define w(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define w(x...)
#endif
#define Time cerr<<"\n\nTime : "<<1000*clock()/CLOCKS_PER_SEC<<"ms\n";

// ar<int,2>
template<typename T> istream &operator>>(istream &istream, array<T,2> &p) { return (istream >> p[0] >> p[1]); }
template<typename T> ostream &operator<<(ostream &ostream, const array<T,2> &p) { return (ostream << p[0] << " " << p[1]); }
// ar<int,3>
template<typename T> istream &operator>>(istream &istream, array<T,3> &p) { return (istream >> p[0] >> p[1] >> p[2]); }
template<typename T> ostream &operator<<(ostream &ostream, const array<T,3> &p) { return (ostream << p[0] << " " << p[1] << " " << p[2]); }
// pair
template<typename T1, typename T2> istream &operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T1, typename T2> ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
// vector
template<typename T> istream &operator>>(istream &istream, vector<T> &v) { for (auto &it : v) { cin >> it; } return istream; }
template<typename T> ostream &operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) { cout << it << " "; } return ostream; }

template<typename T,typename T1>T Rmax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T Rmin(T &a,T1 b){if(b<a)a=b;return a;}
#define Pans(x) cout << ((x)?"YES":"NO") << endl;
//fill(a,a+n, num)

const ll Plus_Infinite = 2e18+5, Minus_Infinite = -(2e18+5);
const int Mx35 = 3e5+5, Mx26 = 2e6+5, Mx16 = 1e6+5, Mx34 = 3e4+5, Mx25 = 2e5+5;
const int Mx15 = 1e5+5, Mx14 = 1e4+5, Mx17 = 1e7+5, Mx13 = 1e3+5, Mx12 = 1e2+5;
const int mod = 1e9+7, MOD = 1e9+7, Zero = 0, One = 1, dom = 998244353, Infinite = 2e9+5;

// First find solution --> Then implement.
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
>>  
--------------------------------------------------------------------*/

void solve(int TEST_CASE){
    if(TEST_CASE>1)hg;w(TEST_CASE);
    //cout<<"Case #"<<TEST_CASE<<":"<<sp;
    int n=0, m=0, k=0, x=0, y=0, ians=0, temp=0;
    cin >> n;

    vc<int> a(n+1, 0), b(n+1, 0), v;
    Fo(i, 1, n)cin >> a[i];
    Fo(i, 1, n)cin >> b[i];

    int l_l = abs(a[1]-b[1]);
    int l_r = abs(a[1]-b[n]);
    int r_l = abs(a[n]-b[1]);
    int r_r = abs(a[n]-b[n]);

    // Have to Connect Ends together No matter what

    // l : leftend
    // r : rightend

    v.pb(l_l + r_r);// CASE 1
    v.pb(l_r + r_l);// CASE 2


    int A_l = Infinite;// Connecting via Left end of A
    Fo(i, 2, n)Rmin(A_l, abs(a[1] - b[i]));

    int A_r = Infinite;// Connecting via Rite end of A
    Fo(i, 1, n-1)Rmin(A_r, abs(a[n] - b[i]));

    int B_l = Infinite;// Connecting via Left end of B
    Fo(i, 2, n)Rmin(B_l, abs(b[1] - a[i]));

    int B_r = Infinite;// Connecting via Rite end of A
    Fo(i, 1, n-1)Rmin(B_r, abs(b[n] - a[i]));


    v.pb(l_l + B_r + A_r);// CASE 3
    v.pb(r_r + A_l + B_l);// CASE 4


    v.pb(l_r + B_l + A_r);// CASE 5
    v.pb(r_l + A_l + B_r);// CASE 6


    v.pb(A_l + A_r + B_l + B_r);// CASE 7

    ians = *min_element(all(v));

    cout << ians << endl;
}    

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cout<<fixed<<setprecision(25);
    int Test=1;//
    cin >> Test;
    for(int T=1; T<=Test; T++){
        solve(T);
    }
    //Time;
    return 0;
}

