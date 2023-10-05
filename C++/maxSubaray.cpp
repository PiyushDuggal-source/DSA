#include "iostream"
#include <vector>

using namespace std;
class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    int max = 0;
    int cur = 0;
    for (int i = 0; i < nums.size(); i++) {
      cur += nums[i];

      if (cur > max) {
        max = cur;
      }
      if (cur < 0) {
        cur = 0;
      }
    }
    return max;
  }
};

int main() {
  Solution sol;

  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  int max = sol.maxSubArray(nums);

  cout << max <<endl;
}
