#include <fstream>
#include <iostream>
#include <vector>

void writeBinary() {

  int count = 6;
  std::vector<float> data(count, 22.1);

  std::ofstream fout{"x.data", std::ios_base::out | std::ios_base::binary};

  fout.write(reinterpret_cast<char *>(&count), sizeof(count));
  fout.write(reinterpret_cast<char *>(&data.front()),
             data.size() * sizeof(float));
  fout.close();
}

void readBinary() {
  std::ifstream fin{"x.data", std::ios_base::in | std::ios_base::binary};

  int count;

  fin.read(reinterpret_cast<char *>(&count), sizeof(count));

  std::cout << "size:" << count << std::endl;
  std::vector<float> data(count, 33);

  fin.read(reinterpret_cast<char *>(&data.front()), sizeof(float) * count);

  for (auto x : data) {
    std::cout << x << std::endl;
  }

  fin.close();
}
int main(int argc, char **argv) {
  writeBinary();
  readBinary();
}