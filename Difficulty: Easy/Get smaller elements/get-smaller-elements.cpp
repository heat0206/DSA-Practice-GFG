class Solution {
  public:
    vector<int> getSmaller(vector<int>& arr, int target) {
        // code here
        vector<int> ans;
        
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] < target){
                ans.push_back(arr[i]);
            }
        }
        
        return ans;
    }
};
