#include <bits/stdc++.h>

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define sz(x) int((x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rp(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep(i, x, n) for (int i = (x); i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)

#define TRACE(x...)
#define WATCH(x) TRACE( cout << #x" = " << x << endl)
#define PRINT(x) TRACE(printf(x))
#define WATCHR(a, b) TRACE( for(auto c = a; c != b;) cout << *(c++) << " "; cout << endl)
#define WATCHC(V) TRACE({cout << #V" = "; WATCHR(V.begin(), V.end()); } )

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int n;
bool checkDiag(string mat[]) {
    char ini = mat[0][0];
    rp(i,n)
        rp(j,n)
            if(i == j || i == n-j-1) {
                if(mat[i][j] != ini)
                    return false;
            }
            else if(mat[i][j] == ini) return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    string mat[303];
    set<int> allChar;
    rp(i,n) {
        cin >> mat[i];
    }
    rp(i,n) rp(j,n) allChar.insert(mat[i][j]);
    if(allChar.size() > 2) {
        cout << "NO" << '\n';
        return 0;
    }

    if(checkDiag(mat)) cout << "YES" << '\n';
    else cout << "NO" << '\n';




    return 0;
}