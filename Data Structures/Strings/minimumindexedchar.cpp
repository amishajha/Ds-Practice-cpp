string printMinIndexChar(string S, string patt)
	{
	
	string st = "";
	unordered_map<char,int>mp;
	for(int i = 0;i<patt.size();i++){
	    mp[patt[i]]++;
	    
	}
	   for(int i = 0;i<S.length();i++){
	       if(mp[S[i]]!=0){
	           st +=S[i];
	           return st;
	           
	       }
	   }
	   return "$"; 
	    
	}
	    