#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>

using std::cerr;
using std::cout;

int main(int argc, char *argv[]) {

  if (argc != 3) {
    cerr << "Usage: ./task_2 100.txt 200.txt\n";
    return EXIT_FAILURE;
  }

  std::stringstream numStr1(argv[1]);
  std::stringstream numStr2(argv[2]);

  int num1, num2;
  std::string ext1, ext2;

  numStr1 >> num1 >> ext1;
  numStr2 >> num2 >> ext2;

  if (ext1 == ".txt" && ext2 == ".txt") {
    cout << (num1 + num2) / 2 << '\n';
  } else if (ext1 == ".png" && ext2 == ".png") {
    cout << (num1 + num2) << '\n';
  } else if (ext1 == ".txt" && ext2 == ".png") {
    cout << (num1 % num2) << '\n';
  } else {
    cerr << "invalid input" << '\n';
  }
  return EXIT_SUCCESS;
}