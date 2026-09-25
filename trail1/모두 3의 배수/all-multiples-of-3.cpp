#include <iostream>
using namespace std;

int main() {
    int N;
    bool multiple = true;

    for(int i = 0; i < 5; i++){
        cin >> N;
        if(N % 3 != 0){
            multiple = false;
        }
    }

    if(!multiple){
        cout << "0";
    } else {
        cout << "1";
    }
    return 0;
}