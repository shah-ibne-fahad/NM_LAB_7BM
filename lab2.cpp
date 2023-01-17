#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n;
    cout << "enter number after dec : ";
    cin >> n;
    int c=0,f=0,ff=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            if((i+n+1)>5)
            {
                s[i+n]++;
            }
            else if((i+n+1)==5)
            {
                int x = s[i+n]-'0';
                if(x%2!=0)
                {
                    s[i+n]++;
                }
            }
        }
    }
    for(int i=0;i<s.size();i++)
    {

    }
   cout << s;

}
