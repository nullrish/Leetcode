#include <iostream>
#include <vector>

using namespace std;

/*
 * Logic for this algorithm is really simple.
 * Let's say we got a vector {"figst", "fight", "figure"}
 * we set inital prefix as "figst"
 * we now loop through the vector.
 * and then for each iteration of vector,
 * * We try to find the prefix in the string of vector
 * * if found then it returns 0 meaning our prefix stays.
 * * For first iteration it'll return 0 so prefix will stay "figst"
 * * But after second iteration, it'll return npos
 * * (no position) 2^n - 1 (n = cpu bits x64, x32 etc.)
 * * That condition triggers the while loop.
 * * Now we decrease prefix by 1 each time while
 * * loop runs. so our prefix becomes "figs"
 * * Next time also it'll return npos
 * * Again we decrease prefx by 1 from last.
 * * so our prefix becomes "fig"
 * * Now when we check again "fig" is present for "fight"
 * * (Itter 2) so it'll return 0. Thus, we go to next iteration.
 * * 3rd iteration we can see the find method will return 0 again.
 * * so our loop ends after traversing through them.
 * And our final prefix is "fig" which we returned.
 * */

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    string prefix = strs[0];
    for (int i = 0; i < strs.size(); i++) {
      while (strs[i].find(prefix) == string::npos) {
        prefix = prefix.substr(0, prefix.size() - 1);
        if (prefix.empty()) {
          return "";
        }
      }
    }
    return prefix;
  }
};

int main() {
  vector<string> strs = {"fight", "figst", "figst"};
  Solution sol;
  cout << sol.longestCommonPrefix(strs) << endl;
  return 0;
}
