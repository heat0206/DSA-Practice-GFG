class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int sumleft = 0;
        int totalsum = 0;
        
        for(auto i : arr){
            totalsum += i;
        }
        
        for(int i =0 ; i<arr.size(); i++){
            int right = totalsum - sumleft - arr[i];
            
            if(sumleft == right){
                return i;
            }
            
            sumleft += arr[i];
        }
        
        return -1;
        
    }
};