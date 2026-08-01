class Solution {
  public:
    vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        vector<int> ans;
        vector<int> store;
        
        int store_sum = 0;
        
        for(auto i : arr){
            store_sum += i;
            store.push_back(store_sum);
        }
        
        for (auto &a : queries){
            int start = a[0];
            int end = a[1];
            
            int sum = store[end] - store[start] + arr[start];
            
            ans.push_back(sum);
        }
        return ans;
    }
};