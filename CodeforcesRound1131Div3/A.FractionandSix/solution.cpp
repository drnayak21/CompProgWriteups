#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    string p, q;
    cin >> p >> q;
    int fp[256]={0}, fq[256]={0};
    for(int i = 0; i < p.length(); i++){
        fp[p[i]-'a']++;
    }
    for(int i = 0; i < q.length(); i++){
        fq[q[i]-'a']++;
    }
    
    for(int i = 0; i < 26; i++){
        int com = min(fp[i], fq[i]);
        fp[i] -= com;
        fq[i] -= com;
    }
    int remp = 0;
    int remq = 0;
    for(int i = 0; i < 26; i++){
        remp += fp[i];
        remq += fq[i];
    }
    if(remq == 0 && remp == 3 && fp['s'-'a'] == 1 && fp['i'-'a'] == 1 && fp['x'-'a'] == 1){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
