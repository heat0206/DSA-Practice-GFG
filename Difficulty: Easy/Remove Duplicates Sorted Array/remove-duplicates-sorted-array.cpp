class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> ans;
        int last_inserted = arr[0];
        
        ans.push_back(arr[0]);
        
        for(int i=1; i<arr.size(); i++){
            if(arr[i] != last_inserted){
                ans.push_back(arr[i]);
                last_inserted= arr[i];
            }
        }
        
        return ans;
    }
};