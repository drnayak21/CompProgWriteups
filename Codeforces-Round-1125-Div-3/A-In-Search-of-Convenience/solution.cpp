#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int x , y , R;
        
        
        cin >> x >> y >> R;
        bool found = false;
        int i = x+R;
        while(i >= x-R && !found){
            int j =y+R;
            while(j >= y-R){
                if(R*R == (x-i)*(x-i) + (y-j)*(y-j)){
                    cout << i << " " << j << "\n";
                    found = true;
                    break;
                }
                j--;
            }
            if(found){
                break;
            }
            i--;
        }
    }
    
    return 0;
}
