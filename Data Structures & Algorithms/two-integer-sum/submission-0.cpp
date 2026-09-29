#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[i] + nums[j] == target) {

                    vector<int> sample;

                    sample.push_back(i);
                    sample.push_back(j);

                    return sample;
                }
            }
        }

        return {};   // Return empty vector if no pair is found
    }
};
