#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;

    for(int i = 0; i <= 20; i++){
        int quotient = A/B;
        int remainder = A%B;
        cout << quotient;
        if(i == 0){
            cout << ".";
        }
        A = remainder * 10;
    }
    return 0;
}