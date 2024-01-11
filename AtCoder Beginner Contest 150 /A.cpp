// A - 500 Yen Coins
// https://atcoder.jp/contests/abc150/tasks/abc150_a
// Authored by CarryKim

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K,X;
    cin >> K >> X;
    if(K*500 >= X)
        cout << "Yes";
    else
        cout << "No";
}
