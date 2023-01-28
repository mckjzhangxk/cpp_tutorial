#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void Print(const vector<int> &s) {

  for (auto x : s) {
    cout << x << " ";
  }
  cout << "\n";
}
int main(int argc, char **argv) {
  vector<int> s = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

  Print(s);

  std::sort(s.begin(), s.end());
  Print(s);

  return 0;
}