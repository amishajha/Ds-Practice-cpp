
vector<string>v;
unordered_set<string>st;
void permute(string s ,int l,int r){
    if(l==r){
        if(st.find(s)==st.end()){
            v.push_back(s);
            st.insert(s);

        }
    }


    for(int i = l;i<=r;i++){
        swap(s[i],s[l]);
        permute(s,l+1,r);
        swap(s[i],s[l]);
        
    }
}


vector<string>find_permutation(string s){
    
     int n = s.size();
     permute(s,0,n-1);
     sort(v.begin(),v.end());
     return v;




}

