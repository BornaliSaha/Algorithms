#include<bits/stdc++.h>
using namespace std;
int mark[1000],nprime=0;
int Prime[10000];

///1 if not prime, 0 if prime
void sieve(int n)
{
    int i,j,limit=sqrt(n)+2;
    mark[1]=1;
    for(i=4;i<=n;i+=2)
        mark[i]=1;
    Prime[nprime++]=2;

    for(i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            Prime[nprime++]=i;
            if(i<=limit)
            {
                for(j=i*i;j<=n;j=j+2*i)
                    mark[j]=1;
            }
        }
    }
}

int main()
{
    int i,n,ck;
    cin>>n;
    sieve(n);

    for(i=0;i<nprime;i++)
        cout<<Prime[i]<<" ";

}




//for single number less then 10^16
bool isPrime(ll n)
{
    if (n <= 1)  return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}




