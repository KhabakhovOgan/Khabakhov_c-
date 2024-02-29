#include <iostream>

using namespace std;

int main() {
  int y, x, a, b;
  double d;
  cin >> x >> y;
  a = x;
  b = y;
  while (x != y) {
    if (x > y) {
      x -= y;
    }
    else {
      y -= x;
    }
  }
  cout << x << endl;
  return 0;
}

