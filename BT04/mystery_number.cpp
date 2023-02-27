#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i = a;i <= b; i++)

void solve(){
    int n; cin >> n;
    vector<int> cnt(101,0);
    int a[n], b[n+1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (int i = 0; i <= n; i++){
        cin >> b[i];
        cnt[b[i]]--;
        if (cnt[b[i]] < 0){
            cout << b[i];
            return;
        }
    }
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("ouput.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--){
        solve();
    }
}