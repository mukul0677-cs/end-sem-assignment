//binary search

#include<stdio.h>
int binarysearch(int a[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(mid==key)
        {
            return mid;

        }
         else if(mid<key)
        {
            start=size+1;
        }
        else
        {
            end=mid-1;
        }
  mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int n;
    int key;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the key to search index\n");
    scanf("%d",&key);
    int index=binarysearch(a,n,key);
    printf("The index of the key is %d",index);
    return 0;
}