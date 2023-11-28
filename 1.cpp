#include <vector>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> out;

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if((nums[i]+nums[j]) == target && j!=i){
                    
                    out.push_back(i);
                    out.push_back(j);
                    return out;
                }
        }
        }
        return out;
    }
};