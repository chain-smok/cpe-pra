//子序列.cpp
//2014.7.7
#include <iostream>
#include <string>
using namespace std;
 
bool isAll_in_All(string s,string t)
{
    int len1 = 0;
    for(int i = 0; i < t.size(); i++)
    {
        if(s[len1] == t[i])
            len1++;
    }
    if(len1 == s.size())
        return 1;
    else
        return 0;
}
 
int main()
{
    string s,t;
    while(cin >> s >> t)
    {
        if(isAll_in_All(s,t))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}