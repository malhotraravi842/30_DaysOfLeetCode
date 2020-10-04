// Problem Link: https://leetcode.com/explore/challenge/card/october-leetcoding-challenge/559/week-1-october-1st-october-7th/3483/

// Solution:

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
    
        int count1=0;

        //putting all the values in hashmap
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        //handling the case when k==0
        if(k==0){
            for(auto x: mp)
            {
                if(x.second>1) count1++;
            }
            return count1;
        }

        //we are iterating over hashmap because hashmap has unique values.
        for(auto x:mp){
            if(mp.count(x.first-k)) count1++;
        }



        return count1;
    }
    
};