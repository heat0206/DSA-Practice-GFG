class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int ans=arr[0];
        for(int i=0;i<arr.size(); i++)
        {
            if(arr[i] > ans)
                ans = arr[i];
        }
        
        int sec_largest = -1;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] < ans && arr[i] > sec_largest ){
                sec_largest = arr[i];
            }
        }
        
        return sec_largest;
    }
};