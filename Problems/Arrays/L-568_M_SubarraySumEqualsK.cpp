//OPTIMAL



//BRUTE FORCE (MINE)
/*
int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int counter = 0; 
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum = sum + nums[j];
                if(sum==k)
                counter++;
            }
        }
        return counter;
    }
*/