class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0 ; i < nums.size()-1 ; i++)                // Since we donot want to add the same element here we start from 0 and go till n-1 so that last element doesnt get added twice
            for(int j = i+1 ; j < nums.size() ; j++)            // And same we start here from the next element of i^th index
                if(nums[i]+nums[j] == target)
                    return vector<int> {i,j};
                    return {};
    }
};
// TC : O(n^2) 
// SC: I should know that
