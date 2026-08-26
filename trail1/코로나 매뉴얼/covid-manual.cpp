#include <iostream>
using namespace std;

int main() {
    char symptom;
    int temp;
    int cnt = 0;

    for(int i= 0; i < 3; i++){
        cin >> symptom >> temp;
        if(symptom == 'Y'){
            if(temp >= 37){
                cnt += 1;
            }
        }
    }

    if(cnt >= 2) {
        cout << "E";
    } else {
        cout << "N";
    }
    return 0;
}