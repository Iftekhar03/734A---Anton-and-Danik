#include<iostream>
#include<string>
using namespace std;

int main()
{
  int n,i,count1=0,count2=0;
  cin>>n;
  string s;
  cin>>s;
  for(i=0;i<n;i++)
  {
    if(s[i]=='A')
        count1++;
    else
        count2++;
  }
  if(count1>count2)
  {
    cout<<"Anton"<<endl;
  }
  else if(count1<count2)
  {
    cout<<"Danik"<<endl;
  }
  else
  {
    cout<<"Friendship"<<endl;
  }
  return 0;
}