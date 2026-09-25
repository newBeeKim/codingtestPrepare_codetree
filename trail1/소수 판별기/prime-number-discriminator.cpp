#include <iostream>
using namespace std;

int main() {
    int N;
    bool prime_num = true;

    cin >> N;

    for(int i = 2; i < N; i++){
        if(N % i == 0){
            prime_num = false;
        }
    }

    if(!prime_num){
        cout << "C";
    } else {
        cout << "P";
    }
    return 0;
}