#include <algorithm>
#include <iostream>
// 必须引入的头文件
#include <numeric>
#include <vector>

using std::cout;
using std::vector;
// 1)min_element==>min_iter,distance
// 2) max
// 3) minmax_elememt ==>[min_iter,max_iter]

int main() {
  vector<int> v{1, 2, -1, 4, 5};

  //返回是iterator
  auto result_iter = std::min_element(v.cbegin(), v.cend());

  // 计算索引 pos=result_iter-v.begin()
  int min_index = std::distance(v.cbegin(), result_iter);
  cout << "v[" << min_index << "]=" << *result_iter << "\n";

  // max func
  cout << "Max(1,999)=" << std::max(1, 999) << "\n";
  cout << "Max(a,b)=" << std::max('a', 'b') << "\n";

  // minmax_elememt
  auto [min_iter, max_iter] = std::minmax_element(v.cbegin(), v.cend());
  cout << "v.min=" << *min_iter << "\n";
  cout << "v.max=" << *max_iter << "\n";
  return 0;
}