#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;
    int answer = 0;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
        else
        {
            answer += count * (count + 1) / 2;
            count = 0;
        }
    }
            answer += count * (count + 1) / 2;
    cout<<answer;
    return 0;
}