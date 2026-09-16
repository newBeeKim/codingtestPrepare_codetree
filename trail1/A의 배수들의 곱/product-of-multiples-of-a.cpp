#include <iostream>
using namespace std;

int main() {
    int A, B, sum = 1;
    cin >> A >> B;

    for(int i = 1; i <= B; i++){
        if(i % A == 0){
            sum *= i;
        }
    }

    cout << sum;
    return 0;
}