#include <iostream>
#include <string>

using namespace std;

int main() {
  int age;
  string full_name;

  cout << "Please enter your name: ";
  getline(cin, full_name);

  cout << "Please enter your age: ";
  cin >> age;
  
  return 0;
}
