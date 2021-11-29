#include<bits/stdc++.h>
using namespace std;
/*
void printBinary(int num)
{
    for(int i=5;i>=0;i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
*/
int main()
{
    //printBinary(9);
    int a=9;
    int i=3; //3rd bit set(1) or not(0)
    if((a&(1<<i)) != 0)
        cout<<"set bit";
    else cout<<"not set bit";
}
