class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>ans;
        long int start = 0;
        int j = 0;
        long int sum = 0;
        while(j<n){
            sum +=arr[j];
            while(sum>s){
                sum = sum-arr[start];
                start++;
       
            
            if(sum==s and start<=j)
         {
    
                     ans.push_back(start+1);
                     ans.push_back(j+1);
                     return ans;
    
        }        
            j++;
            
        }
        ans.push_back(-1);
        return ans;
    }
};