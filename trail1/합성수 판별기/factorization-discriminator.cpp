#include <iostream>
using namespace std;

int main() {
    int N;
    bool composite_num = false;

    cin >> N;

    for(int i = 2; i <= N-1; i++){
        if(N % i == 0){
            composite_num = true;
            break;
        }
    }

    if(composite_num){
        cout << "C";
    } else {
        cout << "N";
    }
    return 0;
}