
#include <fstream>
#include <iostream>
int main(int argc, char *argv[]) {

  std::ofstream fout{"out.txt", std::ios_base::out};

  int i = 3;
  std::string s = "abc";
  double d = 3.13;
  bool b = false;

  fout << "Just string" << std::endl;
  fout << s << " " << i << " " << std::setprecision(20) << d << " "
       << std::boolalpha << b << std::endl;
}