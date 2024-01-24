#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes) {
        vector<vector<int>> res;
        vector<vector<int>> groupsMap(500);

        for (int userId = 0; userId < groupSizes.size(); ++userId) {
            int groupSize = groupSizes[userId];
            groupsMap[groupSize].emplace_back(userId);

            if (groupsMap[groupSize].size() == groupSize) {
                res.emplace_back(groupsMap[groupSize].begin(), groupsMap[groupSize].end());
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
