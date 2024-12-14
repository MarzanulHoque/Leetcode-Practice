class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> numMap; //this one is for storing value for itteraion
        
        for(int i=0;i<n;i++)
        {
            int diff = target-nums[i]; //finding the difference between target and current element
                if(numMap.find(diff)!=numMap.end()) //check if diff exists in numMap[key]
                {
                    ans.push_back(numMap[diff]); 
                    ans.push_back(i);
                } 
            numMap[nums[i]]=i; //storing <key,value> as <nums[i],i> for faster itteration through key .
        }

        return ans;

    }
};