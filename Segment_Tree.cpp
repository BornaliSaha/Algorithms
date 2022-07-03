#include<bits/stdc++.h>
#define ll long long
#define mx 100001
using namespace std;

int ar[mx];
int tree[mx*3];

void Make_Tree(int node, int beg, int enD)
{
    if(beg == enD){
        tree[node] = ar[beg];
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (beg+enD)/2;
    Make_Tree(left,beg,mid);
    Make_Tree(right,mid+1,enD);
    tree[node] = tree[left]+tree[right];
}

int Query(int node,int b,int e, int i, int j)
{
    if(j<b || i>e)
        return 0; // Required segment i-j ar baire
    if(b>=i && e<=j)
        return tree[node]; // puro tai segment a ache
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    int x = Query(left,b,mid,i,j);
    int y = Query(right,mid+1,e,i,j);
    return x+y; // sum of left and right side
}

void Update(int node,int b,int e,int i,int newval)
{
    if(i>e || i<b) return;  // baire chole giyeche
    if(b>=i && e<=i){       // or check b == e
        tree[node]=newval;
        return;
    }
    int left= node*2;
    int right= node*2+1;
    int mid= (b+e)/2;
    Update(left,b,mid,i,newval);
    Update(right,mid+1,e,i,newval);
    tree[node]=tree[left]+tree[right];
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>ar[i];
    Make_Tree(1,1,n);
    cout<<Query(1,1,n,2,5)<<endl;

    Update(1,1,n,2,0);
    cout<<Query(1,1,n,1,3)<<endl;


}




