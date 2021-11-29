#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for(int i=5;i>=0;i--)      //i=5 or......
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;

}
int main()
{
    printBinary(9);
}
