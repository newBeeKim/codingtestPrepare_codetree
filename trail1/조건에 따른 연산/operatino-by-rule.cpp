#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;

    while(N < 1000){
        if(N % 2 == 0){
            N = N * 3 + 1;
            cnt++;
        } else {
            N = N * 2 + 2;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}