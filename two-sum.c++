class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
   int n = nums.size();
   for (int i=0;i<n-1;i++){
    for(int j=i+1; j<n;j++){
        if(nums[i]+nums[j]==target ){
        return{i,j};
        }
    }
   }
   return {};}
};

//optims solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            const auto itr = hash.find(target - nums[i]);
            if (itr != hash.end()) {
                return {itr->second, i};
            }
            hash[nums[i]] = i;
        }
        return {-1, -1};
    }
};}