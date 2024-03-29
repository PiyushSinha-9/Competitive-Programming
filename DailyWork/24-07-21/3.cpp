//https://leetcode.com/problems/132-pattern/submissions/

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        vector<int> minArray(n);
        
        minArray[0]=nums[0];
        for(int i=1;i<n;++i){
            minArray[i]=min(minArray[i-1],nums[i]);
        }
        
        stack<int> stk;
        for(int i=n-1;i>=0;--i){
            if(nums[i]>minArray[i]){
                while(!stk.empty() && stk.top()<=minArray[i]) stk.pop();
                if(!stk.empty() && stk.top()<nums[i]) return true;
                stk.push(nums[i]);
            } 
        }
        return false;
    }
};