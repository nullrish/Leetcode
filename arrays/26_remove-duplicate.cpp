#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

/*
 * Logic of this algorithm.
 * Initialize a counter for unique element as k.
 * Start a loop from 1 to end of the nums vector.
 * if (nums[i - 1] != nums[i]) {
 *  increase counter k by one and set nums[k] = nums[i];
 * }
 * return k at the end which is our counter.
 * */

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int k = 1;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i - 1] != nums[i]) {
        nums[k++] = nums[i];
      }
    }
    return k;
  }
};

int main() {
  vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 5, 6, 7, 7, 8, 8};
  int unique = Solution().removeDuplicates(nums);
  cout << "Unique elements: " << unique << endl;
  for (int i = 0; i < unique; i++) {
    cout << nums[i] << "\t" << endl;
  }
  return 0;
}
