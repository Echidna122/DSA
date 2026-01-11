class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        vector<pair<int,int>> array;

        for(int i = 0; i < nums.size(); i++)
            array.push_back({nums[i], i});

        sort(array.begin(), array.end());

        while(left < right) {
            if(array[left].first + array[right].first > target)
                right--;
            else if(array[left].first + array[right].first < target)
                left++;
            else {
                return {array[left].second, array[right].second};
            }
        }
        return {};
    }
};

// BETTER (0ms runtime)
/*
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
           int req = target - nums[i];
            if(hash.find(req)!=hash.end())
            return {hash[req],i};
            hash[nums[i]] = i;
        }
        return {};
    }
*/



// BRUTE FORCE(MINE)
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        bool flag = false;
        for(i=0;i<nums.size();i++){
            for( j =i+1;j<nums.size();j++){
                if((nums[i] + nums[j]) == target)
                return {i,j};
            }
        }
        return {};
    }
};
*/