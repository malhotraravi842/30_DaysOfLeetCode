// Problem Link : https://leetcode.com/explore/challenge/card/october-leetcoding-challenge/559/week-1-october-1st-october-7th/3480/

// Solution:
class RecentCounter {
public:
    queue<int> ans;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        ans.push(t);
        while(ans.front()<t-3000){
            ans.pop();
        }
        
        return ans.size();
    }
};