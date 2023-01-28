
#include <iostream>
#include <vector>
int main(int argc, char **argv) {
  using std::cout;
  using std::vector;
  const int N = 100;

  vector<int> vec;
  vec.reserve(N);

  for (int i = 0; i < N; i++) {
    vec.emplace_back(i);
  }
  cout << "vec1.cap:" << vec.capacity() << "\n";

  vector<int> vec2;
  for (int i = 0; i < N; i++) {
    vec2.emplace_back(i);
  }
  cout << "vec2.cap:" << vec2.capacity() << "\n";

  return 0;
}