#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    double N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        cin >> num;
        sum += num;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << sum / N;
    return 0;
}