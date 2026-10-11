#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<int> mem;
        vector<bool> tocheck(n+1, false);
        for(int i = 0; i < n ; i++){
            if(s[i] == '1'){
                mem.push_back(i+1);
                
            }
            else if(s[i] == '2'){
                if(mem.empty()){
                    tocheck[i+1] = true;
                }
                else{
                    int topofmem = mem.back();
                    mem.pop_back();
                    tocheck[topofmem] = true;
                }
            }
            else  if(s[i] == '3'){
                tocheck[i+1] = true;
            }
        }
        vector<int> final;
        for(int i = 1; i <= n; i++){
            if(!tocheck[i]){
                final.push_back(i);
            }
            
        }
        cout << final.size() << "\n";
        for(int i = 0; i < final.size(); i++){
            cout << final[i];
            if(i+1 == final.size()){
                cout << "";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}
