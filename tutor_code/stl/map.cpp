#include <iostream>
#include <map>
using std::cout;
int main(int argc, char **argv) {
  //有序集合
  std::map<int, std::string> students;

  students.emplace(2, "Pepo");
  students.emplace(3, "Marcelo");
  students.emplace(1, "Nacho");

  // c++17
  for (auto &[id, name] : students) {
    cout << "id:" << id << ",name:" << name << "\n";
  }

  for (auto &kv : students) {
    cout << "id:" << kv.first << ",name:" << kv.second << "\n";
  }
  return 0;
}