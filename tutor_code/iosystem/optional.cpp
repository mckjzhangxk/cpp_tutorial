
#include <iostream>
#include <optional>

std::optional<std::string> StringFactory(bool create) {

  if (create) {
    return "c++";
  } else {
    return {};
  }
}
int main(int argc, char *argv[]) {

  std::cout << StringFactory(true).value() << std::endl;
  std::cout << StringFactory(false).value_or("no assigned value") << std::endl;
}