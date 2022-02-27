#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, find;
    cin >> n >> find;
    int arr[n];
    int answer;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == find)
        {
            answer = i;

        }
        else if (arr[i] < find)
        {
            answer = i + 1;
        }
    }
    cout<< answer;
}

2 3 4 5 8 10
