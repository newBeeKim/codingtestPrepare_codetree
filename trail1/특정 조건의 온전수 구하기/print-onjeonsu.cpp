#include <iostream>
using namespace std;
bool ones(int n) {
    while (n != 0) {
        if (n / 10 == 0) {
            if (n == 5) {
                return true;
            }
            else {
                return false;
            }
        }
        n /= 10;
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0 || (i % 3 == 0 && i % 9 != 0) || i % 10 == 5) {
            continue;
        }
        else {
            cout << i << " ";
        }
    }
    return 0;
}