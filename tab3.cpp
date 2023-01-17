#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,arr[1000],p[1000],x;
   cout << "Enter the value of N :";
   cin >> n;
   cout << "Enter the value of X : ";
   cin >> x;
   cout << "Enter N number : ";
   for(int i=n-1;i>=0;i--)
   {
       cin >> arr[i];
   }
   p[n-1]= arr[n-1];
   for(int i=n-1,j=1;i>=0;i--,j++)
   {
       p[i-1] = p[i] * x + arr[i-1];
   }
   for(int i=0;i<n;i++)
   {
       cout <<"P[" <<i << "] = "<< p[i] << endl;
   }
}


