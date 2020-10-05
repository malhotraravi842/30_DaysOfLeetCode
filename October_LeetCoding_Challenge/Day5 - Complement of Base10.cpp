// Problem Link: https://leetcode.com/explore/challenge/card/october-leetcoding-challenge/559/week-1-october-1st-october-7th/3484/

// Solution:
class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==0){
            return 1;
        }
        int n=0;
        int temp =N;
        while(N){
            n = (n << 1) + 1;
            N =N>>1;
        }
        
        return n -temp;
    }
};