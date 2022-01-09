#include<iostream>
#include<string.h>
#define MOD 100000007         //TO PREVENT INTEGER OVERFLOW
#define mod2 100000006
#define MS 105
typedef long long int LL;       //SHORT HAND FOR long long

using namespace std;

int sz,tmul[MS][MS],tpow[MS][MS];   

void mul(int c[MS][MS],int a[MS][MS],int b[MS][MS])
{     
     int i,k,j;
     for(i=0;i<sz;i++)for(j=0;j<sz;j++)
     { 
     LL x=0;
     for(k=0;k<sz;k++)
     x=x+(1LL*a[i][k]*b[k][j]);
     if(x>=mod2)x%=mod2;
     tmul[i][j]=x;
     }
     for(i=0;i<sz;i++)for(j=0;j<sz;j++)
     c[i][j]=tmul[i][j];
}

void pow(int r[MS][MS],int a[MS][MS],int p,int s)
{     
      int i,j;
      sz=s;
     
     for(i=0;i<s;i++)for(j=0;j<s;j++)
     r[i][j]=(i==j),tpow[i][j]=a[i][j];
     
     while(p)
     {
             if(p&1) mul(r,r,tpow);
             if((p>>=1))mul(tpow,tpow,tpow);
     }
}    

LL mod(LL a,LL p)
{
    LL r=1;
    for(;p>0;p>>=1)
    {
       if(p&1)r=(1LL*r*a)%MOD;
       a=(1LL*a*a)%MOD;
       }
    return r;
}

 int tax[MS],r[MS][MS],a[MS][MS]; 
 //tax array store initial tax value
 // r array stores
 // a array stores

 int main()
{
    int t,m,slot1,slot2,k,n,i;   
    // t is test case , k is 4(assumption) 
    //n is total years to pay for
    // m is slot1+slot2 
    
    cin>>t;
    while(t!=0)
    {
        t--;
              cin>>slot1>>slot2>>n;
              tax[0]=2;  //asked in question
              k=n-(slot1+slot2);       //assumption for set of years
              --n;       //since iniTax is predefined as 2

              for(i=1;i<=slot1;i++)
                 tax[i]=tax[i-1]+1;      //asked in question
                 m=slot1+slot2;
                 for(i=slot1+1;i<=m;i++)    //asked in question
                 tax[i]=(2*tax[i-1])%MOD;  
                 // only to avoid large values not to overflow

                 if(n<=m)
                 cout<<tax[n];
                 else
                 {
                     memset(a,0,sizeof(a)); 
                     //sets array a all elements as 0(int)
                     
                     for(i=0;i<k;i++)
                     a[0][i]=a[i+1][i]=1; 
                     
                     pow(r,a,n-m,k);
                     LL ans=1;
                     for(i=0;i<k;i++)
                     ans=(ans*mod(tax[m-i],r[0][i]))%MOD;
                     cout<<ans<<endl;
                 }
    }
    return 0;
}   

