#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int num = 0;
    bool three_six_nine = false;

    for (int i = 1; i <= N; i++) {
        num = i;
        three_six_nine = false;

        while (num != 0) {
            if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9) {
                three_six_nine = true;
                break;
            }
            num /= 10;
        }

        if (i % 3 == 0 || three_six_nine == true) {
            cout << 0 << " ";
        }
        else {
            cout << i << " ";
        }
    }
    return 0;
}