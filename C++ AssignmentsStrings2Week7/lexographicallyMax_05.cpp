#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    stringstream ss(s);
    vector<string>vs;
    string temp;
    while(ss>>temp)
    {
           vs.push_back(temp);
    }
     sort(vs.begin(),vs.end());
  cout<<vs[vs.size()-1];
    return 0;
}