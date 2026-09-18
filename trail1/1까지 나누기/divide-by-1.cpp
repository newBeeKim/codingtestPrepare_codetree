#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0, num = 1;
    cin >> N;

    while (true) {
        N /= num;
        cnt++;
        if (N <= 1) {
            cout << cnt;
            break;
        }
        num++;
    }
    return 0;
}