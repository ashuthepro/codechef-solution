#include<iostream>
using namespace std;

int main()
{
int t,n,k,a[100],sum1,sum2,i,j,sno,flag;
cin>>t;
while(t--)
{
cin>>n>>k;
for(i=0;i<n;i++)
cin>>a[i];
for(j=0; j<k; j++)
{
flag=0; sum1=0; sum2=0;
cin>>sno;
for(i=0; i<n; i++)
{
if(flag == 0)
sum1 += a[i];
if(a[i]==sno)
flag=1;
if(flag == 1)
sum2 += a[i];
}
if(sum1<sum2)
cout<<sum1<<endl;
else
cout<<sum2<<endl;
}
}
return 0;
}
