int reverse(int x){
        
        long long rem ,rev = 0;
        while(p!=0){
            rem = p%10;
            rev = rev*10+rem;
            p/=10;
            
        }
        
        return rev;
        
        
        
        
    }
    bool isPalindrome(int x) {
        
        if(x<0){
            return false;
        }
        
        if(x==reverse(x)){
            return true;
            
        }
        
        else {
            return false;
        }
    }