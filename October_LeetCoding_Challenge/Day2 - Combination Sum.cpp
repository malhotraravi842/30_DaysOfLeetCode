// Problem Link: https://leetcode.com/explore/challenge/card/october-leetcoding-challenge/559/week-1-october-1st-october-7th/3481/

// Solution:
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // sort input array 
        sort(candidates.begin(), candidates.end()); 

        // remove duplicates 
        candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end()); 

        vector<int> r; 
        vector<vector<int> > res; 
        findNumbers(candidates, target, res, r, 0); 

        return res; 
    }
    
    void findNumbers(vector<int>& ar, int sum, vector<vector<int> >& res, vector<int>& r, int i){
        if(sum<0){
            return;
        }else if(sum ==0){
            res.push_back(r);
            return;
        }
        
        while(i <ar.size() && sum -ar[i] >=0){
            r.push_back(ar[i]);
            
            findNumbers(ar, sum-ar[i], res, r, i);
            i++;
            
            r.pop_back();
        }
    }
};