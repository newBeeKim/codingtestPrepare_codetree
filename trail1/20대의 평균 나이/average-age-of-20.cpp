#include <iostream>
using namespace std;

int main() {
    int sum = 0, age;
    double cnt = 0;
    bool flag = true;

    while (flag) {
        cin >> age;
        if (age < 20 || age >= 30) {
            cout << fixed;
            cout.precision(2);
            cout << sum / cnt;
            flag = false;
            break;
        }
        sum += age;
        cnt++;
    }
    return 0;
}