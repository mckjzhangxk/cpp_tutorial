#include <iostream>
#include <map>
#include <vector>

using std::map;
using std::vector;
// iterator

// 1) 类似于指针
// 2）可以快速遍历 container
// 3) 很多算法作用于iterator
// 4) 所有stl container都有iterator定义

// begin,end constant版本 cbegin,cend,
int main(int argc, char **argv) {
  vector<double> x{1, 2, 3};
  map<int, std::string> m = {{1, "hello"}, {2, "horld"}};

  for (auto it = x.begin(); it != x.end(); it++) {
    std::cout << *it << "\n";
  }

  auto m_it1 = m.find(1);
  auto m_it2 = m.find(2);

  std::cout << m_it1->first << ":" << m_it1->second << "\n";
  std::cout << m_it2->first << ":" << m_it2->second << "\n";

  // can not found;,end()返回的迭代器等价于 NULL
  if (m.find(3) == m.end()) {
    std::cout << "Key 3 wat not found\n";
  }
  return 0;
}