class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int start = 0, end = n - 1, ans = 0;
        
        while(start < n && arr[start] > k){
            start++;
        }
        
        if(start == n)  return 0;
        
        while(end >= 0 && arr[end] > k){
            end--;
        }
        
        if(start == end)    return 0;
        
        int count = 0;
        
        for(int i = start; i <= end; i++){
            if(arr[i] <= k){
                count++;
            }
        }
        
        int temp = 0;
        
        for(int i = start; i < start + count; i++){
            if(arr[i] <= k){
                temp++;
            }
        }
        
        ans = 1e9;
        
        if(count - temp < ans){
            ans = count - temp;
        }
        for(int i = start + count; i <= end; i++){
            if(arr[i] <= k){
                temp++;
            }
            if(arr[i - count] <= k){
                temp--;
            }
            if(count - temp < ans){
                ans = count - temp;
            }
        }
        
        return ans;
    }
};
