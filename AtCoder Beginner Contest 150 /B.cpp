#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    string S;
    cin >> N;
    cin >> S;
    int ans = 0;
    for(int i=0; i<S.size()-2; i++) {
        if(S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C')
            ans++;
    }
    cout << ans;
}
