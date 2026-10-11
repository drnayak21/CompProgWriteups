```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int maxrain = 0, count = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') {
            count++;
            maxrain = max(maxrain, count);
        }
        else {
            count = 0;
        }
    }

    cout << maxrain << "\n";
    return 0;
}
```
