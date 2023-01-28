#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main(int argc, char **argv) {
  vector<int> s = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
  int n1 = 33;

  auto result = std::find(s.begin(), s.end(), n1);

  //也可以使用s.end()
  if (result != std::end(s)) {
    cout << "Find " << *result << "\n";
  } else {
    cout << "Can't found " << n1 << "\n";
  }

  return 0;
}