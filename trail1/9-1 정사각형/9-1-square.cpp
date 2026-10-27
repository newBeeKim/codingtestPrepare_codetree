#include <iostream>
using namespace std;

int main() {
  int N, cnt = 9;
  cin >> N;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      cout << cnt;
      cnt--;
      if (cnt == 0) {
        cnt = 9;
      }
    }
    cout << endl;
  }
}