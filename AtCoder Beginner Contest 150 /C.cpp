// C - Count Order
// https://atcoder.jp/contests/abc150/tasks/abc150_c
// Authored by CarryKim

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int P[9], Q[9];
    int inital[9] = {1,2,3,4,5,6,7,8,9};
    long long a = 0, b = 0;
    long long cnt = 0;
    for(int i=0; i<N; i++)
        cin >> P[i];
    for(int i=0; i<N; i++)
        cin >> Q[i];
    do {
        cnt++;
        bool checkP = true, checkQ = true;
        for(int i=0; i<N; i++) {
            if(P[i] != inital[i])
                checkP = false;
            if(Q[i] != inital[i])
                checkQ = false;
        }
        if(checkP) a = cnt;
        if(checkQ) b = cnt;
    } while(next_permutation(inital, inital+N));
    cout << abs(a-b);
}
