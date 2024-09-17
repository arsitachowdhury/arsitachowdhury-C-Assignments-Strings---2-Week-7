#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool checkAnagram(string s,string t)
{
   sort(s.begin(),s.end());
   sort(t.begin(),t.end());
   if(s==t) return true;
   else return false;
}
int main()
{
    string s1;
    string s2;
    cout<<"Enter 1st string : ";
    cin>>s1;
    cout<<"Enter 2nd string : ";
    cin>>s2;
    cout<<checkAnagram(s1,s2);
    return 0;
}
