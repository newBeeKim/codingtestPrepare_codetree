#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    double cnt = 0;
    
    for(int i = 0; i < 10; i++){
        cin >> num;
        if(num >= 0 && num <= 200){
            sum += num;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);

    cout << sum << " " << sum / cnt;
    return 0;
}