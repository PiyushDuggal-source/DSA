#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

using namespace std;
template <typename K, typename V> void print_map(std::map<K, V> const &m) {
  for (auto const &pair : m) {
    std::cout << "{" << pair.first << ": " << pair.second << "}\n";
  }
}
class Solution {
public:
  bool isAnagram(string s, string t) {

    if (s.length() != t.length())
      return false;
    unordered_map<char, int> sobj;
    unordered_map<char, int> tobj;

    for (int i = 0; i < s.length(); i++) {
      if (sobj.count(s[i]) == 0) {
        sobj.insert(pair(s[i], 1));
      } else {
        sobj[s[i]] += 1;
      }
      if (tobj.count(t[i]) == 0) {
        tobj.insert(pair(t[i], 1));
      } else {
        tobj[t[i]] += 1;
      }
    }

    for (int i = 0; i < sobj.size(); i++) {
      if (sobj[i] != tobj[i])
        return false;
    }
    return true;
  }
};



int main() {
  Solution sol;
  string anagram = "anagram";
  string naagram = "naagram";

  bool isAnagram = sol.isAnagram(anagram, naagram);

  cout << isAnagram << endl;

  return 0;
}
