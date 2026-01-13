




// BETTER(MINE)
/*
    int majorityElement(vector<int>& nums) {
        int max;
        unordered_map<int,int> hash;
    for(int i =0;i<nums.size();i++){
        hash[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++){
        if(hash[nums[i]]>(nums.size()/2))
        max = nums[i];
    }
    return max; 
    }
*/