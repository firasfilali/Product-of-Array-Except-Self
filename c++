class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> L(len);
        vector<int> R(len);
        vector<int> res(len);
      
        L[0] = 1;
        R[len-1] = 1;
        
        for(int i=1;i<len;i++){
            L[i] = L[i-1] * nums[i-1];
        }
        for(int i=len-2;i >= 0;i--){
            R[i] = R[i+1] * nums[i+1];
        }
        for(int i=0;i<len;i++){
            res[i] = L[i]*R[i];
        }
        return res;
    }
   
};
