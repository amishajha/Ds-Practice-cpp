#include<iostream>
#include<string>
#include<stack>
using namespace std;



 int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int maxi=0;
        for(int i=0;i<s.length();i++){
            
            char c = s.charAt(i);
            
            if(c='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.isEmpty()){
                    st.push(i);
                }
                else{
                    int len = i - st.peek();
                    maxi = max(maxi,len);
                }
            }
        }
        
        return maxi;
         
    }





    int  main()
    {

        string s = "(()";
      cout << longestValidParentheses(s);

        
        return 0;
    }