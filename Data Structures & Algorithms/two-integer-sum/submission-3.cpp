//better approach:

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);

        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            if(mp.contains(target-nums[i]) && mp[target-nums[i]]!=i){
                ans[0]=i;
                ans[1]=mp[target-nums[i]];

                return ans;
            }
        }

        return ans; 
    }
};
