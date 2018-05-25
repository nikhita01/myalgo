#include<conio.h>
#include<iostream.h>
int knapsack(int,int);
int max(int,int);
int w1[20];
int  p[20];
int main()
{
int n,w2;
clrscr();
cout<<"Enter number of items  - ";
cin>>n;
cout<<"Enter the capacity of the knapsack"<<endl;
cin>>w2;
cout<<"Enter profit "<<endl;
for(int i=0;i<n;i++)
cin>>p[i];
cout<<"Enter weight "<<endl;
for(i=0;i<n;i++)
cin>>w1[i];
cout<<knapsack(n,w2);
getch();
return 0;
}
int knapsack(int n,int w2)
{
if(n==0 || w2==0)
{
return 0;
}
if(w1[n-1]>w2)
{
return knapsack(n-1,w2);
}
int x=p[n-1]+knapsack(n-1,w2-w1[n-1]);
return max(x,knapsack(n-1,w2));
cout<<x;
}
int max(int a,int b)
{
 if(a>b)
 return a;
 else
 return b;
}

