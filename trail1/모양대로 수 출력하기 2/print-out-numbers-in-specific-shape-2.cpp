#include <iostream>
using namespace std;

int main() {
  int N, cnt = 2;
  cin >> N;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      cout << cnt << " ";
      cnt += 2;
      if (cnt >= 10) {
        cnt = 2;
      }
    }
    cout << endl;
  }
}