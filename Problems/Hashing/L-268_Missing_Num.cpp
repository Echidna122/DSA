class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            sum = sum + nums[i];
        }
        int sumn = n*(n+1)/2;
        return (sumn - sum);
    }
};


/*class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i = 0; i<=nums.size();i++){
            int flag = 0;
            for(int j = 0;j<nums.size();j++){
                if(nums[j]==i){
                    flag = 1;
                break;
                }
            }
            if(flag == 0)
            return i;
        }
        return -1;
    }
};*/
