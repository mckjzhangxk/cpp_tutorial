
#include <iostream>
#include <tuple>
int main(int argc, char *argv[]) {
  using Student = std::tuple<std::string, int>;

  std::tuple<std::string, int> student1{"zhang", 22};

  std::cout << std::get<0>(student1) << std::endl;
  std::cout << std::get<1>(student1) << std::endl;

  Student student2{"li", 33};
  std::cout << std::get<0>(student2) << std::endl;
  std::cout << std::get<1>(student2) << std::endl;

  // 测试赋值
  student1 = student2;
  std::cout << std::get<0>(student1) << std::endl;
  std::cout << std::get<1>(student1) << std::endl;

  // c++ 17 自动获取数值
  auto [name, age] = student2;
  std::cout << name << std::endl;
  std::cout << age << std::endl;
}