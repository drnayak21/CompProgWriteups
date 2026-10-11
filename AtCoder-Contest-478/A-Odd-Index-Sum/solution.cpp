#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; int x; int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(i%2 == 0){
            sum += x;
        }
    }
    cout << sum << "\n";
}
