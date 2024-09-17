#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    string temp=s;
    reverse(s.begin(),s.end());
    cout<<temp+s;
    return 0;
}