#include <iostream>
#include <vector>
using namespace std;

/*
 * Logic is relatively simple
 * Just think we're doing that addition we used to do
 * in our elementary level with carry and stuff.
 * The only difference is we don't hold carry anywhere here.
 * We simply increase the digits if it's smaller than 9 for the given vector
 * if it is 9 then we set the digit as 0 and go for next loop till it's not 9.
 * and we increase it again. at the end if every digit is 9 then we'll have all
 * the default digit as 0,0,0... so we simply insert 1 at the beginning.
 * */

class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    for (int i = digits.size() - 1; i >= 0; i--) {
      if (digits[i] < 9) {
        digits[i]++;
        return digits;
      }
      digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
  }
};

void printDigits(vector<int> &digits) {
  for (int i = 0; i < digits.size(); i++) {
    cout << digits[i];
  }
  cout << endl;
}

int main() {
  vector<int> digit1 = {2, 3, 4};
  vector<int> digit2 = {9, 9, 9, 9, 9};
  Solution().plusOne(digit1);
  printDigits(digit1);
  Solution().plusOne(digit2);
  printDigits(digit2);
  return 0;
}
