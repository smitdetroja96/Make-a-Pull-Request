#include<iostream>

using namespace std;

void heapify(int a[], string s[],int i, int n)
{
    int l,r,largest;
    l = 2*i + 1;
    r = 2*i + 2;
    largest = i;
    if(l<n && a[l]>a[largest])
    {
        largest=l;
    }
    if(r<n && a[r]>a[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        swap(s[i],s[largest]);
        heapify(a,s,largest,n);
    }
}

void heapsort(int a[],string s[],int n)
{
    int i;
    for(i=(n/2);i>=0;i--)
    {
        heapify(a,s,i,n);
    }
    for(i=n-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        swap(s[0],s[i]);
        heapify(a,s,0,i);
    }
}

int main()
{
    int n,i;
    int a[]={4,1,6,2,1,5};
    string s[] = {"nice","a","Smit","am","I","guy"};
    n=6;
    heapsort(a,s,n);

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<s[i]<<endl;
    }
    return 0;
}
