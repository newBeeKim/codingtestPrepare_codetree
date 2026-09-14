#include <iostream>
using namespace std;

int main() {
    int A,B;
    int sum = 0, avg = 0;
    double cnt = 0;
    cin >> A >> B;

    for(int i = A; i <= B; i++){
        if(i % 5 == 0 || i % 7 == 0){
            sum += i;
            cnt++;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << sum / cnt;
    return 0;
}