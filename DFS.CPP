#include<iostream.h>
#include<conio.h>
int main()
{ clrscr();
  int a[8][8]={ 0,5,3,500,500,500,500,500,
		5,0,500,7,4,500,500,500,
		3,500,0,1,500,500,9,500,
		500,7,1,0,2,7,8,500,
		500,4,500,2,0,1,500,500,
		500,500,500,7,1,0,500,3,
		500,500,9,8,500,500,0,5,
		500,500,500,500,500,3,5,0,
	      };
int visited[7]={0,0,0,0,0,0,0};
int source=0;
int traversal[8];
int dest =7;
int b[8][8];
int i,j,n1,n2,min,pos,k,c=0;
for(i=0;i<8;i++)
{ b[source][i]=a[source][i];
}
visited[source]=1;
traversal[c++]=source;
n1=source;
while(n1!=dest)
{ min=500;
for(j=0;j<8;j++)
{ if(b[n1][j]<min && visited[j]==0)
   { min=b[n1][j];
     pos=j;
   }
}
n2=n1;
n1=pos;
k=min;
for(j=0;j<8;j++)
{ if(b[n2][j]<(a[n1][j]+k))
  {  b[n1][j]=b[n2][j];
  }
  else
  { b[n1][j]=(a[n1][j]+k);
  }
}
visited[n1]=1;
traversal[c++]=n1;
}
for(i=0;i<c;i++)
{ cout<<traversal[i]<<" ";
}
getch();
return 0;
}








