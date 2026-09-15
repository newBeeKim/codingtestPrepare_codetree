#include <iostream>
using namespace std;

int main() {
    int N, perfect_num = 0;
    cin >> N;

    for(int i = 1; i < N; i++){
        if(N % i == 0){
            perfect_num += i;
        }
    }

    if(perfect_num == N){
        cout << "P";
    } else {
        cout << "N";
    }
    return 0;
}