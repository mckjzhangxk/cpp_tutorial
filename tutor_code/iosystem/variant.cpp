#include <iostream>
#include <variant>
int main(int argc, char **argv) {
  using std::cout;
  using std::endl;
  std::variant<int, float> v1;
  v1 = 1;
  cout << "v1=" << std::get<int>(v1) << endl;

  std::variant<int, float> v2 = 1.2f;
  cout << "v2=" << std::get<float>(v2) << endl;

  v1 = v2;
  //如果写std::get<int>(v1),报访问错误
  cout << "v1=" << std::get<float>(v1) << endl;
  return 0;
}