#include<stdio.h>

int mergeandcount(int a[],int ,int ,int);
int mergesort(int a[],int i,int j)
{
    int count=0;
    if(i<j)
    {
        int k;
        k = (i+j)/2;
        count = mergesort(a,i,k);
        count += mergesort(a,k+1,j);
        count += mergeandcount(a,i,k,j);
    }
    return count;
}

int mergeandcount(int a[],int i,int k,int j)
{
    int l,r,count=0,b[j-i+1],p=0;
    l = i;
    r = k+1;
    while(l<=k && r<=j)
    {
        if(a[l] > a[r])
        {
            b[p++] = a[r++];
            count += (k-l);
        }
        else
            b[p++] = a[l++];
    }
    while(l<=k)
        b[p++] = a[l++];
  
    while(r<=j)
        b[p++] = a[r++];
  
    p=0;
    l=i;
    while(l<=j)
        a[l++] = b[p++];
 
    return count;
}


int main()
{
    int a[5] = {1,20,6,4,5},count=0;
    count = mergesort(a,0,4);
    printf("%d\n",count);
    return 0;
}