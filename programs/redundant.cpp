#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkRedundant(string str)
{
    stack<char> s;
    for (char ch : str)
    {
        if (ch != ')')
        {
            s.push(ch);
        }

        else
        {
            bool operator_found = false;
            while (!s.empty() && s.top() != '(')
            {
                char top = s.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                {
                    operator_found = true;
                }
                s.pop();
            }
            s.pop();

            if (operator_found == false)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string str = "((a+b))+c)";
    if (checkRedundant(str))
    {
        cout << "contains R" << endl;
    }
    else
    {
        cout << "do not contains";
    }
}
