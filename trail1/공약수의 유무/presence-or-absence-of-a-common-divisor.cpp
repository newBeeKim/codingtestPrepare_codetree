#include <iostream>
using namespace std;

int main() {
    int A,B;
    bool common_divisor = false;
    cin >> A >> B;

    for(int i = A; i <= B; i++){
        if(1920 % i == 0 && 2880 % i == 0){
            common_divisor = true;
        }
    }

    if(common_divisor){
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}