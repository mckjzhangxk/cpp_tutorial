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
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Print(v);

  std::rotate(v.begin(), v.begin() + 3, v.end());
  Print(v);
  return 0;
}