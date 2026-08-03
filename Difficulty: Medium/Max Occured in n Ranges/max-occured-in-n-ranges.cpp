class Solution {
  public:
    int maxOccured(vector<int>& L, const vector<int>& R) {
        // code here
        int MAX = 0;
        for(auto i: R){
            if(i>MAX){
                MAX = i;
            }
        }
        vector<int> freq(MAX+2,0);
        
        for(int i=0; i<L.size(); i++){
            freq[L[i]]++;
            freq[R[i] + 1]--;
        }
        
        int sum = freq[0];
        
        for(int i=1 ; i<freq.size(); i++){
            freq[i] = freq[i] + sum;
            sum = freq[i];
        }
        
        int max = 0;
        int index = 0;
        for(int i=0; i<freq.size(); i++){
            if(freq[i] > max){
                max = freq[i];
                index = i;
            }
        }
        
        return index;
    }
};