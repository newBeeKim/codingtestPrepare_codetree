#include <iostream>
using namespace std;

int main() {
    int num, cnt = 0;
    bool flag = true;
    while(flag){
        cin >> num;
        if(num % 2 == 0){
            if(cnt == 3){
                flag = false;
                break;
            }
            cout << num / 2 << endl;
            cnt++;
        }
    }
    return 0;
}