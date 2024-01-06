#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int numberToFind = target-nums[i];

            if(mpp.find(numberToFind) != mpp.end()) {
                ans.push_back(mpp[numberToFind]);
                ans.push_back(i);
                break;
            }
            else{
                mpp[nums[i]] = i;
            }
        }

        return ans;
    }
};