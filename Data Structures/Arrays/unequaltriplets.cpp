#include<iostream>
using namespace std;

// Input: nums = [4,4,2,4,3]
// Output: 3
// Explanation: The following triplets meet the conditions:
// - (0, 2, 4) because 4 != 2 != 3
// - (1, 2, 4) because 4 != 2 != 3
// - (2, 3, 4) because 2 != 4 != 3
// Since there are 3 triplets, we return 3.
// Note that (2, 0, 4) is not a valid triplet because 2 > 0.


// class Solution {
// public:

// o(n*n*n)
//   int ans = 0;
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i + 1; j < nums.size(); j++){
//                 for(int k = j +1; k < nums.size(); k++){
//                     if(nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k]) ans++;
//                 }
//             }
//         }
//         return ans;
    

