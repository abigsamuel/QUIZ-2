#include<iostream>
using namespace std;
int positive(int a[])
{
 int p=0;
for(int i=0;i<5;i++)
 if(a[i]>0) p++;
return p;
}
int negative(int a[])
{
int n=0;
for(int i=0;i<5;i++)
 if(a[i]<0) n++;
return n;
}
int zero(int a[])
{
int z=0;
for(int i=0;i<5;i++)
 if(a[i]==0) z++;
return z;
}
int posSum(int a[])
{
int ps=0;
for(int i=0;i<5;i++)
if(a[i]>0) ps=ps+a[i];
return ps;
}
int negSum(int a[])
{
int ns=0;
for(int i=0;i<5;i++)
if(a[i]<0) ns=ns+a[i];
return ns;
}

double average(int a[])
{
int sum=0;
for(int i=0; i<5; i++)
sum=sum+a[i];
double avg=sum/5.0;
return avg;
}

void display(int a[])
{
int p=0,n=0,z=0;
cout<<positive(a)<<" "<<negative(a)<<" "<<zero(a)<<endl;
cout<<posSum(a)<<" "<<negSum(a)<<endl;
cout<<average(a);
}
int main()
{
int a[5];
for(int i=0;i<5;i++) cin>>a[i];
display(a);
return 0;
}