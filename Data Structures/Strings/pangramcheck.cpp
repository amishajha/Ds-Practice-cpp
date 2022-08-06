bool checkpangram (string &str){
      
    //    set<char>s;
    //     for(int i = 0;i<str.length();i++){
    //         s.insert(str[i]);
            
    //     }
    //     if(s.size()>=26){
    //         return true;
    //     }
        
    //     return false;arr


    int arr[26] = {0};
    int index;
    for(int i = 0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){


            index = str[i]-'a';


        }

        if(str[i]>='A' && str[i]<='Z')
        {
            index  = str[i]-'A';
            

        }


        arr[index] = 1;

    }


    bool ans ;
    for (int i = 0;i<26;i++){
        if(arr[i]==0){
            ans = false;
            break;


        }

        else {
            ans = true;

        }
    }




    return ans;

    




}