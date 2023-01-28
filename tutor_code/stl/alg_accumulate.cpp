#include <algorithm>
#include <iostream>
// 必须引入的头文件
#include <numeric>
#include <vector>

using std::cout;
using std::vector;

int main() {
  vector<int> v{1, 2, 3, 4, 5};

  // accumlate(begin,end,initvalue,func)
  int sum = std::accumulate(v.begin(), v.end(), 0);
  int prod = std::accumulate(v.cbegin(), v.cend(), 1, std::multiplies<int>());
  cout << "sum:" << sum << "\n";
  cout << "prod:" << prod << "\n";
  return 0;
}