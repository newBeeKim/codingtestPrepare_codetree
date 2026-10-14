#include <iostream>
using namespace std;

int main() {
  int N, j = 0;
  cin >> N;

  for (int i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      if (i == 0) {
        cout << "* ";
      }
      else if (j % 2 == 1 && i > 0 && i <= j) {
          cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  return 0;
}