#include <iostream>
int multiplication(int multiplier, int multiplicand);
int main() {
  int multiplier, multiplicand;
  using namespace std;
  cout << "input multiplicand";
  cout << endl;
  cin >> multiplicand;
  cout << "input multiplier";
  cout << endl;
  cin >> multiplier;
  int result = multiplication(multiplier, multiplicand);
  cout << "result is: " << result
    << endl;
  return 0;
}

int multiplication(int multiplier, int multiplicand) {
  return multiplicand * multiplier;
}