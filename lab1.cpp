#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c=0,f=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='0' && s[i]!='.')
            f=1;
        if(f && s[i]!='.')
            c++;
    }
    cout << "significant number : " << c << endl;
}

