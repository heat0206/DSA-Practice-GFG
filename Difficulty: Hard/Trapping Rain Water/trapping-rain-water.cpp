class Solution {
  public:
  
    int maxWater(vector<int> &arr) {
        // code here
        vector<int> left(arr.size());
        vector<int> right(arr.size());
        
        int max = arr[0];
        
        left[0] = max;
        
        for(int i=1; i<arr.size(); i++){
            if(arr[i] > max){
                max = arr[i];
            }
            left[i] = max;
        }
        
        
        max = arr[arr.size()-1];
        
        right[arr.size()-1] = max;
        
        for(int i=arr.size()-2; i>=0; i--){
            if(arr[i] > max){
                max = arr[i];
            }
            right[i] = max;
        }
        
        
        int ans= 0;
        for(int i=0 ;i<arr.size(); i++){
            ans =ans + (min(left[i], right[i]) - arr[i]);
        }
        
        return ans;
    }
};