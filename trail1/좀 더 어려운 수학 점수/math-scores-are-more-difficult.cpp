#include <iostream>
#include <string>
using namespace std;

int main() {
    int A_Eng, A_Math;
    int B_Eng, B_Math;
    string student;

    cin >> A_Math >> A_Eng >> B_Math >> B_Eng;

    if(A_Math > B_Math) {
        cout << "A";
    } else if(A_Math < B_Math) {
        cout << "B";
    } else {
        student = A_Eng > B_Eng ? "A" : "B";

        cout << student;
    }


    return 0;
}