#include <bits/stdc++.h>
# include <vector>
using namespace std;

void recurpermute(int index, vector<int> &nums , vector<vector<int>> &ans)
{
    // Checking for the base case where the index pointer reaches the end of the array and we have a permutation
    if(index==nums.size())
    {
        ans.push_back(nums);
        return;
    }
    // Recursively calling the function for all the possible permutations
    for(int i = index ; i < nums.size() ; i++)
    {
        swap(nums[index], nums[i]);
        recurpermute(index+1,nums,ans);
        // Backtracking as we need to come back to the original array after finding the permutations
        swap(nums[index],nums[i]);
    }
}

int main()
{
    // Declasring the input vector
    vector<int> nums = {1,2,3};
    vector<vector<int> > ans;

    // Calling the recursive function
    recurpermute(0,nums,ans);

    // Printing the permutations
    for(int i = 0 ; i < ans.size() ; i++)
    {
        for(int j = 0 ; j < ans[i].size() ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}   


// N represents the size of input array
// TC : O(N!xN)                            # since searching input arrays from all possible permutations will take N!.
// SC : O(1)

