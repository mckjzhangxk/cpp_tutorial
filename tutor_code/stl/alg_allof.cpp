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
  // 10个元素，全是2
  vector<int> s(10, 2);
  // s.back() = 3;
  Print(s);

  // lambda func
  auto even = [](int i) { return i % 2 == 0; };
  // 全部都返回 true
  bool all_even = std::all_of(s.cbegin(), s.cend(), even);
  if (all_even) {
    cout << "All Number are even\n";
  }
  return 0;
}