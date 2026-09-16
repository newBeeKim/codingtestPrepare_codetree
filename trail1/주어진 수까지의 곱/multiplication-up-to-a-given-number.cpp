#include <iostream>
using namespace std;

int main() {
    int A, B, sum = 1;
    cin >> A >> B;
    
    for(int i = A; i <= B; i++){
        sum *= i;
    }

    cout << sum;
}