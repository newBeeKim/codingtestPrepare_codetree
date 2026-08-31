#include <iostream>
using namespace std;

int main() {
    int B,A;
    cin >> B >> A;

    for(int i = B; i >= A; i--){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }
    return 0;
}