#include <array>
#include <iostream>

// 以下写法是错误的，但是可以对 类型使用如下语法
// using cout = std::cout;
// using endl = std::endl;

using std::cout;
using std::endl;

using MyData = std::array<float, 3>;

int main(int argc, char **argv) {
  //   std::array<float, 3> data = {10.0f, 11.0f, 22.2f};
  MyData data = {10.0f, 11.0f, 22.2f};

  for (float &f : data) {
    cout << f << endl;
  }
  cout << std::boolalpha; //输出格式设置成bool
  cout << "Array empty " << data.empty() << endl;
  cout << "Array size " << data.size() << endl;

  // front,end返回的都是引用，所有可以直接设置数值
  //   data.front() = 22;
  cout << "Array font " << data.front() << endl;
  cout << "Array end " << data.back() << endl;
  return 0;
}