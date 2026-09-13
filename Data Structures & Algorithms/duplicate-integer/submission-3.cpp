class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0){
            return false;
        }
        
        /* //approach 1 (brute):
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
            return true;
            }
        }*/
        
        //approach 2 (optimised):
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for (const auto it : mp) {
           if(it.second>1)
           return true;
        }

        return false;
    }
};