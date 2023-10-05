#include <iostream>

using namespace std;

int main() {
  // Printing stuff to console
  std::cout << "Hello World!!" << std::endl;
  int age{20};

  std::cout << "This is my age: " << age << std::endl;

  // Printing error:
  std::cerr << "This is an error message:" << std::endl;

  // Printing log:
  std::clog << "This is a Log message" << std::endl;

  return 0;
}
