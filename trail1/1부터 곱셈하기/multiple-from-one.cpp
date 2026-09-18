#include <iostream>
using namespace std;

int main() {
    int N, multiply = 1;
    cin >> N;

    for(int i = 1; i <= 10; i++){
        multiply *= i;
        if(multiply >= N){
            cout << i;
            break;
        }
    }
    return 0;
}