#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 int a[20];
 int temp;
 cout<<"enter elements"<<endl;
 for(int i=0;i<20;i++)
 {
 cin>>a[i];
 }
 cout<<"sorting using bubble sort"<<endl;
 for(i=0;i<(20-1);i++)
 {
  for(int j=0;j<(20-i-1);j++)
  {
    if(a[j]>a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      }
   }
 }
 cout<<"Sortedlist is"<<endl;
 for(i=0;i<20;i++)
 {
 cout<<a[i]<<"   ";
 }
 getch();
 }