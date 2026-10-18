#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a<=b){
            cout << -1 << "\n";
        }
        else{
            int x = min(a-b, b);
            cout << x << "\n";
        }
    }
    return 0;
}
