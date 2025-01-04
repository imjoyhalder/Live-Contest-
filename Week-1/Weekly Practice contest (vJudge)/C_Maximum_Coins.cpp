#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    int t;
    cin >> t;

    while (t--) {
        int game, win;
        cin >> game >> win;
        int win_coin = 0;
        int loss_coin = 0;

       
        for (int i = 1; i <= game - win; i++) {
            loss_coin += pow(2,i); 
        }
        
        for (int i = game - win + 1; i <= game; i++) {
            win_coin += pow(2,i); 
        }

        cout << win_coin - loss_coin << endl;
    }

    return 0;
}
