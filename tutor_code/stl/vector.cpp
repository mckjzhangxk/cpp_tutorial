#include <iostream>
#include <vector>
int main(int argc, char **argv) {
  std::vector<std::string> names = {"Join", "Tom"};
  names.emplace_back("Reobot");
  // names.push_back("Rebot");s
  using std::cout;
  using std::endl;

  cout << "First name:" << names.front() << endl;
  cout << "Last name:" << names.back() << endl;

  return 0;
}