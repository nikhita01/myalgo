#include<conio.h>
#include<iostream.h>
void max(int *a,int n,int i)
{
 int j,temp;
 temp=a[i];
 j=2*i;
 while(j<=n)
 {
 if(j<n && a[j+1]>a[j])
 j=j+1;
 if(temp>a[j])
 break;
 else if(temp<=a[j])
 {
 a[j/2]=a[j];
 j=2*j;
 }
 }
 a[j/2]=temp;
 return;
 }
 void sort(int *a,int n)
 {
 int i,temp;
 for(i=n;i>=2;i--)
 {
 temp=a[i];
 a[i]=a[1];
 a[1]=temp;
 max(a,1,i-1);
 }
 }
 void build(int *a,int n)
 {
 int i;
 for(i=n/2;i>=1;i--)
 {
 max(a,i,n);
 }
 }
 int main()
 {
 clrscr();
 int n,i;
 cout<<"enter no of elements"<<endl;
 cin>>n;
 int a[20];

 for(int j=0;j<n;j++)
 {
 cout<<"enter elements at "<<j<<endl;
 cin>>a[j];
 }
 build(a,n);
 sort(a,n);
 cout<<"Sorted array"<<endl;
 for(int m=1;m<=n;m++)
 cout<<a[m]<<endl;
 getch();
 return 0;
 }