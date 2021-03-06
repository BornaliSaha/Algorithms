#include<bits/stdc++.h>
using namespace std;
int temp[200];

void Merge(int arr[],int left, int mid, int right)
{
    int i,j,k=0;
    i=left;
    j=mid+1;
    while(i<=mid && j<=right)
    {
        if(arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
            temp[k++]=arr[j++];
    }
    while(i<=mid)
    {
         temp[k++]=arr[i++];
    }
    while(j<=right)
    {
        temp[k++]=arr[j++];
    }

    for(i=left,j=0;i<=right;i++,j++)
    {
        arr[i]=temp[j];
    }

}

void MergeSort(int arr[],int left, int right)
{
    if(left>=right)
        return;
    else
    {
        int mid;
        mid=(left+right)/2;

        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);

        Merge(arr,left,mid,right);
    }
}

int main()
{
    int i,j,n,arr[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

