#include <vector>
#include <map>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::map<int, int> checkDup = {};

        for (int i = 0; i < nums.size(); i++) {
            if (checkDup.count(nums.at(i))) {
                return true;
            }
            checkDup.insert({nums[i], 1});
        }

        return false;
    }
};