#include <iostream>

int move(int p, int byValue) {
  int newPos = p + byValue;
  return newPos;
}

int main() {
  int pos = 0;
  pos = move(pos, 5);
  std::cout << pos;
};