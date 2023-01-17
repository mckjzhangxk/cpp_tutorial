#include <cstdlib>
#include <iostream>
#include <random>

using std::cerr;
using std::cin;
using std::cout;

int main(int argc, char *argv[]) {
  int guess = 0;

  std::random_device rnd;
  std::uniform_int_distribution<> dist(0, 99);
  int target = dist(rnd);

  int retCode = EXIT_SUCCESS;

  while (1) {
    cout << "input what your guess[0-99]:";
    cin >> guess;

    // check valid input
    if (cin.fail()) {
      cerr << "[ERROR]:Error encounted,exiting...\n";
      retCode = EXIT_FAILURE;
      break;
    }
    if (guess < 0 || guess > 99) {
      cerr << "[WARNING]:Number must be  between 0 and 99\n";
      continue;
    }

    // logic routine
    if (guess < target) {
      cout << "your guess " << guess << " is smaller\n";
    } else if (guess > target) {
      cout << "your guess " << guess << " is larger\n";
    } else
      break;
  }

  cout << "target number is " << target << '\n';
  return retCode;
}