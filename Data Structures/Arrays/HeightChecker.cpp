class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0 ;
        vector<int>arr=heights;
        sort(arr.begin(),arr.end());
        int res = 0;
        for(int i = 0;i<heights.size();i++){
              res+= heights[i]!=arr[i];
            
            
        }
        return res;
    }
};