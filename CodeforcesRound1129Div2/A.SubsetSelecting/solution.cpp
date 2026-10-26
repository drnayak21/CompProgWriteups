#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> f(n+5, 0);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            f[a[i]]++;
            if(a[i] != 0){
                cnt++;
            }
        }
        if(cnt == n){
            cout << 0 << "\n";
        }
        else{
            int avail = 0;
            int cu = 0;
            while(true){
                if(f[cu] == 0){
                    break;
                }
                avail += f[cu];
                if(avail >= k){
                    avail -= k;
                    cu++;
                }
                else{
                    break;
                }
            }
            cout << cu << "\n";
        }
    }
}
