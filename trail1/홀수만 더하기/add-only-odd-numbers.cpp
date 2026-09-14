#include <iostream>
using namespace std;

int main() {
    int N, num;
    int sum = 0;
    cin >> N;

    for(int i = 1; i <= N; i++){
        cin >> num;
        if(num % 2 == 1 && num % 3 == 0){
            sum += num;
        }
    }

    cout << sum;
    return 0;
}