// Return 1 if found, else 0. Update res in-place.
int subarraySum(int* arr, int n, int target, int* res) {
    // code here
    int start =0;
    int curr=0;
    
    for(int i=0; i<n ;i++){
        curr+=arr[i];
        
        while(curr > target && start < i){
            curr -= arr[start];
            start++;
        }
        
        if(curr == target){
            res[0] = start + 1;
            res[1] = i + 1;
            return 1;
        }
    }
    
    return 0;
}