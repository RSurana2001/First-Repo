#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll a,b;
  cin>>a>>b;
  cout<<"The sum of numbers is"<<a+b<<endl;
  int arr[]={1,2,3,4};
  int sum=0;
  for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
      {
        sum+=arr[i];
      }
  cout<<sum<<endl;
}
