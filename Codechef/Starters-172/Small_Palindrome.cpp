#include <iostream>
#include <string>

using namespace std;

void findSmallestPalindrome(int X, int Y) {
    string ones(X, '1');  
    string twos(Y, '2');  

    string result = ones.substr(0, X / 2) + twos + ones.substr(0, X / 2);
    
    cout << result << endl;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        findSmallestPalindrome(X, Y);
    }

    return 0;
}
