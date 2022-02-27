#include<iostream>
#include<stack>
using namespace std;



int prec(char c){

    if(c=='^'){
    return 3;

}
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
void infixtopost(string s){
string result;
stack<char>st;
for(int i=0;i<s.length();i++){
    int a=s[i];
    if((a>='a'&&a<='z')||(a>='A'&&a<='Z') ||(a>='0'&&a<='9'))
        result+=a;


else if(a=='('){
               st.push(a);
            }


    else if(a==')'){
        while(st.top()!='('){
           result+=st.top();
         st.pop();
            }
         st.pop();


        }



    else{
        while(!st.empty()&& prec(s[i])<=prec(st.top())){
            result+=st.top();
               st.pop();

        }
        st.push(a);


}

    }



        while(!st.empty()){

            result+=st.top();
            st.pop();
        }


cout<<result;

}








int main(){
 string s="a+b*(c^d-e)^(f+g*h)-i";
infixtopost(s);
return 0;
}
