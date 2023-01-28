
#include <algorithm>
#include <iostream>
#include <vector>

bool div_by_3(int x) { return (x % 3) == 0; }
int main(int argc, char **argv) {
  std::vector<int> v{1, 2, 3, 3, 4, 3, 7, 8, 9, 10};

  int n1 = 3;
  int n2 = 5;

  int num1_count = std::count(v.begin(), v.end(), n1);
  int num2_count = std::count(v.begin(), v.end(), n2);

  std::cout << n1 << ":count:" << num1_count << "\n";
  std::cout << n2 << ":count:" << num2_count << "\n";

  int num3_count = std::count_if(v.begin(), v.end(), div_by_3);
  std::cout << "div by 3 count:" << num3_count << "\n";
  return 0;
}