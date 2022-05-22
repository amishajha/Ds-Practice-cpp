// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

 

// Example 1:

// Input: nums = [1,1,2]
// Output:
// [[1,1,2],
//  [1,2,1],
//  [2,1,1]]




// vector<vector<int>>permuteUnique(vector<int>&nums)
// {

//    set<vector<int>>st;
//    vector<int>temp=nums;
//    do
//    {
//     next_permutation(temp.begin(),temp.end());
//     st.insert(temp);
    
//    } while (temp!=nums);
//    vector<vector<int>>ans;
//    for(auto it :st)
//        ans.push_back(it);
//    return ans;
   






// }