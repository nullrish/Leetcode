#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

/*
 * Logic of this algorithm
 * We create an unordered map called complement which will keep track
 * of all the numbers in the vector along with their position.
 * We start loop from 0 to end of the nums vector.
 * We first substract target with the first number of vector.
 * We check if the unordered map contains any difference of target and number.
 * If found:
 * - we return the complement[diff] and i which are position.
 * Else:
 * - Insert nums[i] and also its position to the map.
 * the loop goes on.
 * If nothing found we return an empty vector/array.
 *
 * LOGIC IS: target - nums[i] = diff, diff + nums[i] = target, if diff is in the
 * map we got our answers :P
 * */

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> complements;
    for (int i = 0; i < nums.size(); i++) {
      int diff = target - nums[i];
      if (complements.count(diff))
        return {complements[diff], i};
      complements.insert({nums[i], i});
    }
    return {};
  }
};

int main() {
  Solution sol;
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> answer = sol.twoSum(nums, target);
  for (int i = 0; i < answer.size(); i++) {
    cout << answer[i] << endl;
  }
  return 0;
}
