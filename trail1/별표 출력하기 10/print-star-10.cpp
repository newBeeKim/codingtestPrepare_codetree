#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < 2 * N; i++) {
    if (i % 2 == 0) {
      for (int j = 1; j <= (i / 2) + 1; j++) {
        cout << "* ";
      }
      cout << endl;
    } else {
      for (int j = N-(i-1)/2; j >= 1; j--) {
        cout << "* ";
      }
      cout << endl;
    }
  }
  return 0;
}