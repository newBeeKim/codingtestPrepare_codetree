#include <iostream>
using namespace std;

int main() {
    int A, B, sum = 1;
    cin >> A >> B;

    for(int i = 1; i <= B; i++){
        sum *= A;
    }

    cout << sum;
    return 0;
}