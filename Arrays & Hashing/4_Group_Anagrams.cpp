// https://leetcode.com/problems/group-anagrams/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {}
};

int main() {
  Solution sol;
  vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};

  vector<vector<string>> output = sol.groupAnagrams(input);

  cout << "Grouped Anagrams:\n";
  for (const auto &group : output) {
    cout << "[ ";
    for (const auto &word : group) {
      cout << word << " ";
    }
    cout << "]\n";
  }

  return 0;
}
