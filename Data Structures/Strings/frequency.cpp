#include<iostream>
using namespace std;

void calculatefrequency(string str){
       
       map<string,int>M;
       string word = "";
       for(int i = 0;i<str.size();i++){
        if(str[i]==' '){
            if(M.find(word)==M.end()){
                M.insert(make_pair(word,1));
                word = "";

            }

            else {
                M[word]++;
                word = "";

            }
        }


    else 
       word+=str[i];
    }

    if(M.find(word)==M.end())
    M.insert(make_pair(word,1));
    else 

    M[word]++;

    for(auto&i :M){
      
      cout<<it.first<<"-"<<it.second<<endl;


    }



   


}


int main(){
    string str = "GeeksforGeeks";
    calculatefrequency(str);
    return 0;
    

}