#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printBinary(int n)
{
    for(int i=10;i>=0;i--)
    {
        cout<<((n>>i)&1);
    }
    cout<<"\n";
}
int main()
{
/**
    for(int i=2;i<=10;i++)
    {
        /// 1. to check even or odd
        if(i&1)
            cout<<"odd\n";
        else cout<<"Even\n";
        /// 2. i right shift >> 1 means i/2
        cout<<(i>>1)<<endl;
        /// i left shift << 1 means i*2
        cout<<(i<<1)<<endl;
    }

**/

    ///Upper case to Lower Case
    for(char c ='A';c <= 'Z';c++)
    {
        //cout<<c<<" "<<int(c)<<" ";
        //printBinary(int(c));
        cout<<char(c| ' ')<<endl;
    }
    ///Lower to Upper Case
    for(char c ='a';c <= 'z';c++)
    {
        cout<<char(c & '_')<<endl;
    }

    /// Power of 2 or not
    int n=128;
    if(n & (n-1))
        cout<<"Not power of 2";
    else cout<<"Power of 2";


}
