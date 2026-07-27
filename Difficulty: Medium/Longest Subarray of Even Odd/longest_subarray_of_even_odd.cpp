class Solution {
  public:
    int maxEvenOdd(vector<int>& arr) {
        // code here
        int curr=1;
        int prev;
        int maxLen=1;
        
        if(arr[0] % 2 == 0){
            prev = 1;
        }
        else
        {
            prev = 0;
        }
        
        for(int i=1; i<arr.size(); ++i){
            if(prev && !(arr[i] % 2 == 0)){
                curr++;
                prev = 0;
            }
            else if(!prev && (arr[i] % 2 == 0)){
                curr++;
                prev = 1;
            }
            else{
                maxLen = max(curr,maxLen);
                curr=1;
                
                if(arr[i] % 2 == 0){
                    prev = 1;
                }else{
                    prev = 0;
                }
            }
        }
        
        maxLen = max(maxLen , curr);
        
        return maxLen;
    }
};
