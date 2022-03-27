// Input: nums = [1,2,1]
// Output: [2,-1,2]
// Explanation: The first 1's next greater number is 2; 
// The number 2 can't find next greater number. 
// The second 1's next greater number needs to search circularly, which is also 2.

#include <iostream>
using namespace std;

     vector<int> nextGreaterElements(vector<int>& nums) {


        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-2; i>=0; i--)
        {
            // if current element is greater than stack top then insert it and pop top of stack
            while(st.size()>0 && st.top() <=nums[i]) 
            {
               st.pop();
            }
            st.push(nums[i]);
        }
        for(int i=n-1;i>=0;i--)
        {
            while(st.size()>0 && st.top() <=nums[i]) 
            {
               st.pop();
            }
            // if stack is empty then no greater element then add -1 else stack top
            ans[i] = st.size() == 0?-1 : st.top();
            st.push(nums[i]);
        }

        return ans;



        
            
         
    


        
    }



int main()
{
	vector<int>arr={1,2,1};
	vector<int>ans;
	ans = nextGreaterElements(arr);
	for(int i = 0;i<arr.size();i++){
		cout<<ans[i]<<endl;
	}

	return 0;
}