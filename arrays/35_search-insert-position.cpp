#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (nums[mid] == target) {
        return mid;
      }

      if (nums[mid] < target) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    return -1;
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target = 8;
  int pos = Solution().searchInsert(nums, target);
  cout << "Position of " << target << " is " << pos << endl;
  return 0;
}
