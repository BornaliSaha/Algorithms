#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for(int i=10;i>=0;i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main()
{
    printBinary(9);
    int a=13;
    int i=3; //3rd bit set(1) or not(0)
    if((a&(1<<i)) != 0)
        cout<<"set bit\n";
    else cout<<"not set bit\n";

    //to set bit
    printBinary(a| (1<<1));

    //bit unset
    printBinary( a &(~(1<<3)));

    //toggle (0 to 1, 1 to 0)
    printBinary( a ^ (1<<2));

    //count set bits(1)
    int ct=0;
    for(int i=31;i>=0;i--)
    {
        if((a&(1<<i)) != 0)
            ct++;
    }
    cout<<ct<<endl;
    //or.....
    cout<<__builtin_popcount(a);

}
