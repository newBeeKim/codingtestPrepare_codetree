#include <iostream>
using namespace std;

int main() {
    int width, height;
    char ch;
    bool flag = true;

    while(flag){
        cin >> width >> height >> ch;
        cout << width * height << endl;
        if(ch == 'C'){
            flag = false;
            break;
        }
    }
    return 0;
}