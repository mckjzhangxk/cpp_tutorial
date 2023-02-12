#include <any>
#include <iostream>

// any  表示任意的数值
int main(int argc, char **argv) {
  using std::cout;
  using std::endl;
  std::any a;

  a = 1;
  cout << "a=" << std::any_cast<int>(a) << endl;

  a = 3.14;
  cout << "a=" << std::any_cast<double>(a) << endl;
  a = true;
  //如果写std::get<int>(v1),报访问错误
  cout << std::boolalpha << "a=" << std::any_cast<bool>(a) << endl;
  return 0;
}