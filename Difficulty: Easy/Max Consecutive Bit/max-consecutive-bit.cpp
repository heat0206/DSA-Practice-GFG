class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        if(arr.size() == 0)
            return 1;
            
        int p=arr[0];
        int c=1;
        int m =1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] == p){
                c++;
            }
            else{
                m = max(m,c);
                c=1;
                p = arr[i];
            }
        }
        
        m = max(m,c);
        return m;
    }
};