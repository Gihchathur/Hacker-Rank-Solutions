#include<iostream>
using namespace std;

void countAppleOrange()
{
   int a,b,x,y,m,n,sum1=0,sum2=0,w,e;
   cin>>a>>b>>x>>y;
   cin>>m>>n;
  
   for(int k=0; k<m; k++)
   {
       cin>>w;
       if((w+x)>=a&&(w+x)<=b)
            sum1++;
   }
   for(int k=0; k<n; k++)
   {
       cin>>e;
       if((e+y)<=b&& (e+y)>=a)
            sum2++;
   }
    cout<<sum1<<endl;cout<<sum2;
    
}

int main ()
{
    countAppleOrange();
    return 0;
}

