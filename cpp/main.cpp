#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes) {
        vector<vector<int>> res;
        unordered_map<int, vector<int>> groupsMap;

        for (int userId = 0; userId < groupSizes.size(); ++userId) {
            int groupSize = groupSizes[userId];
            groupsMap[groupSize].push_back(userId);

            if (groupsMap[groupSize].size() == groupSize) {
                res.push_back(groupsMap[groupSize]);
                groupsMap[groupSize].clear();
            }
        }

        return res;
    }
};

int main() {
    Solution *solution = new Solution();
    vector<int> t1 = {3,3,3,3,3,1,3};
    auto res1 = solution->groupThePeople(t1);

    vector<int> t2 = {2,1,3,3,3,2};
    auto res2 = solution->groupThePeople(t1);

    return 0;
}
