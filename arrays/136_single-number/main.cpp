#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int ans = 0;
    for (int n : nums) {
      ans ^= n;
    }
    return ans;
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 2, 3};
  cout << Solution().singleNumber(nums) << endl;
  return 0;
}
