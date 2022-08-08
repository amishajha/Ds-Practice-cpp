int minflip(string s){
    int count1=0;
    int count2 = 0;
    for(int i = 0;i<s.length();i++){
        if(i&1 and s[i]=='0') count1++;
        if(i%2==0 and s[i]=='1')count1++;
        if(i&1 and s[i]=='1')count2++;
        if(i%2==0 and s[i]=='0')count2++;

    }


    int ans =  min(count1,count2);
    return ans;
}