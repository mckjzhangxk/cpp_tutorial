
#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;

// rotate的意思是
// r[i]=r[(i+offset) mod N]
int main(int argc, char **argv) {
  std::vector<int> v{3, 4, 2, 8, 15, 267};

  // lambda func
  auto print = [](const int &n) { cout << " " << n; };
  std::for_each(v.begin(), v.end(), print);
  return 0;
}