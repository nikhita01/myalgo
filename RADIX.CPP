#include<iostream.h>
#include<conio.h>
int getmax(int a[],int n)
{
  int mx=a[0];
  for(int i=1;i<n;i++)
  {
  if(a[i]>mx)
  mx=a[i];
  }
  return mx;
}
void count(int  a[],int n,int exp)
{
 int o[20];
 int i,count[10]={0};
 for(i=0;i<n;i++)
 count[(a[i]/exp)%10]++;
 for(i=1;i<10;i++)
 count[i]+=count[i-1];
 for(i=n-1;i>=0;i--)
 {
  o[count[(a[i]/exp)%10]-1]=a[i];
  count[(a[i]/exp)%10]--;
 }
 for(i=0;i<n;i++)
 a[i]=o[i];
}
void radix(int a[],int n)
{
 int m=getmax(a,n);
 for(int exp=1;m/exp>0;exp*=10)
 count(a,n,exp);
}
void print(int a[],int n)
{
 for(int i=0;i<n;i++)
 cout<<a[i]<<" ";
}
int main()
{
clrscr();
int a[5];
cout<<"enter elements"<<endl;
for(int i=0;i<5;i++)
cin>>a[i];
int n=sizeof(a)/sizeof(a[0]);
radix(a,n);
print(a,n);
getch();
return 0;
}

