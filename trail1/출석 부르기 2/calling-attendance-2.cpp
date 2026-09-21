#include <iostream>
using namespace std;

int main() {
    int num;
    bool flag = true;
    while(flag){
        cin >> num;
        switch(num) {
            case 1:
                cout << "John" << endl;
                break;
            case 2:
                cout << "Tom" << endl;
                break;
            case 3:
                cout << "Paul" << endl;
                break;
            case 4:
                cout << "Sam" << endl;
                break;
            default:
                cout << "Vacancy" << endl;
                flag = false;
                break;
        }
    }
    return 0;
}