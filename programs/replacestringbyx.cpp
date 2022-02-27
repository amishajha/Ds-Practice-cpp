#include<iostream>
using namespace std;

string ReplacebyX(string str, string s)
{
    while(str.find(s) != string::npos)
    {
        str.replace(str.find(s), s.size(), "X");
    }

    string res;

    for(int i = 0; i < str.size(); i++)
    {
        res += str[i];

        if(str[i] == 'X')
        {
            while(i + 1 < str.size() and str[i + 1] == 'X')
            {
                i++;
            }
        }
    }

    return res;
}

int main()
{


    int T;
    cin >> T;

    while(T--)
    {
        string str, s;
        cin >> str >> s;

        cout << ReplacebyX(str, s) << "\n";
    }

    return 0;
}
