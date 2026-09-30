#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int k = 1; k <= N-i+1; k++){
            for(int j = N; j >= i; j--){
                cout << "*";
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}