#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
     sort(s.begin(),s.end()); // 2 4 6 7 9 9
     //cout<<s;
     int mx=0;
     int n=s.size()-1;
     char ch=s[n];
     while(n>=0)
     {
        if(s[n]!=ch){
        int ascii=(int)s[n];
        mx=ascii-48;
        break;
        }
        else{
            n--;
        }
     }
    cout<<"2nd largest number is : "<<mx; 
    return 0;
}