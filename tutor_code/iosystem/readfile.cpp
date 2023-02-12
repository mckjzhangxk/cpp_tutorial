
#include <fstream>
#include <iostream>
int main(int argc, char *argv[]) {

  std::ifstream fin{"student.txt", std::ios_base::in};

  int i;
  std::string s;

  while (fin >> s >> i) {

    std::cout << s << ":" << i << std::endl;
  }
  fin.close();

  std::ifstream fin_2{"student.txt", std::ios_base::in};
  std::string line;
  while (std::getline(fin_2, line)) {
    std::cout << line << std::endl;
  }
}