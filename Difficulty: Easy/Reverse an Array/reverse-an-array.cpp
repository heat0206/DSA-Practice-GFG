class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        for(int i=0,j=arr.size()-1 ; j>=i ; i++,j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
};