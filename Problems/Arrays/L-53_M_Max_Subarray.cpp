//OPTIMAL -> KADANE's ALGO
class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int maxsum =INT_MIN;
        int sum =0;
        for(int i =0;i<nums.size();i++){
            sum = sum + nums[i];
            if(sum>maxsum)
            maxsum = sum;
            if(sum<0)
            sum =0;
        }
        return maxsum;
    }
};

//BETTER -> TLE
/*
int maxSubArray(vector<int>& nums){
        int maxsum =INT_MIN;

        for(int i=0;i<nums.size();i++){
            int sum =0;
            for(int j =i;j<nums.size();j++){
                sum = sum + nums[j];
                maxsum = max(maxsum,sum);
            }
        } 
        return maxsum;
    }
*/



//BRUTE FORCE->TLE(MINE)
/*
    int maxSubArray(vector<int>& nums){
        int maxsum =INT_MIN;

        for(int i=0;i<nums.size();i++){
            for(int j =i;j<nums.size();j++){
                int sum =0;
                for(int k=i;k<=j;k++){
                    sum = sum + nums[k];

                }
                maxsum = max(maxsum,sum);
            }

        } 
        return maxsum;
   }

*/