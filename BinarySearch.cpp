#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int binarySearch(int arr[],int left, int right,int x)
{
    while(left<=right)
    {
        int mid = (left+(right - left))/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            left = mid +1;
        }
        else right = mid-1;
    }
    return -1;
}
int main()
{
    int arr[100007],target,ans,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    ans= binarySearch(arr,0,n-1,target);
    if(ans == -1)
        cout<<"-1"<<endl;
    else cout<<ans<<endl;
}
