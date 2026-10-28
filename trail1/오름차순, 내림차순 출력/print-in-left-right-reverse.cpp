#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
      if (i % 2 != 0) {
        for (int k = 0; k < N; k++) {
          cout << N - k;
        }
      } else {
        for (int k = 0; k < N; k++) {
          cout << k+1;
        }
    }
    cout << endl;
  }
}