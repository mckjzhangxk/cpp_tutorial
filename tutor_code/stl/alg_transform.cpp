#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::vector;

void Print(const vector<std::string> &s) {

  for (auto x : s) {
    cout << x << " ";
  }
  cout << "\n";
}

int main(int argc, char **argv) {
  vector<std::string> names{"join", "tom"};
  vector<std::string> upperNames(2);

  auto toUpper = [](std::string s) { return "ERROR"; };

  // names==>upperNames
  // upperNames[i]= func(names[i])
  std::transform(names.cbegin(), names.cend(), upperNames.begin(), toUpper);

  Print(names);
  Print(upperNames);
  return 0;
}