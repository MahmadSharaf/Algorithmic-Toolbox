#include <iostream>

int get_change(int m) {
  int tens,fives,coins;
  coins= m/10;
  tens=m%10;
  fives=tens%5;
  if (tens==0)
      return coins;
  else if (fives==0)
      return coins+int(tens/5);
  else
      return coins+int(tens/5)+fives;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
