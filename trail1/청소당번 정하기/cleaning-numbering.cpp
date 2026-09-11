#include <iostream>
using namespace std;

int main() {
    int n, classroom = 0, corridor = 0, toilet = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            if (i % 3 != 0 && i % 12 != 0) {
                classroom++;
            }
        }

        if (i % 3 == 0) {
            if (i % 12 != 0) {
                corridor++;
            }
        }

        if (i % 12 == 0) {
            toilet++;
        }
    }

    cout << classroom << " " << corridor << " " << toilet;
    return 0;
}