class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        if(arr.size() == 1){
            return ;
        }
        
        d %= arr.size();
        vector<int> help;
        for(int i=0; i<d; i++){
            help.push_back(arr[i]);
        }
        
        for(int i=0; i<arr.size()-d; i++){
            arr[i] = arr[i+d];
        }
        
        for(int i=0,idx = arr.size() - d; idx<arr.size(); idx++,i++){
            arr[idx] = help[i];
        }
    }
};