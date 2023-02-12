
#include <chrono>
#include <iostream>
int main(int argc, char *argv[]) {
  auto start = std::chrono::steady_clock::now();

  for (int i = 0; i < 100000; i++) {
  }

  auto end = std::chrono::steady_clock::now();

  std::chrono::duration<float> sec = end - start;

  std::cout << sec.count() << std::endl;
}