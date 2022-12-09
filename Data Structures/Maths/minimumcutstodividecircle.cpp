// Input: n = 4
// Output: 2
// Explanation: 
// The above figure shows how cutting the circle twice through the middle divides it into 4 equal slices
    
    int numberOfCuts(int n) {
        
        if(n==1){
            return 0;
        }
        
        else if(n%2==0) return n/2;
        return n;
        
        
    }