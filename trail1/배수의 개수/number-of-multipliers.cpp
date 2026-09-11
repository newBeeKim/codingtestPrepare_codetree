#include <iostream>
using namespace std;

int main() {
    int num, three_multiple = 0, five_multiple = 0;
    for(int i = 0; i < 10; i++){
        cin >> num;
        if(num % 3 == 0){
            three_multiple++;
        } 
        if(num % 5 == 0){
            five_multiple++;
        }
    }
    cout << three_multiple << " " << five_multiple;
    return 0;
}