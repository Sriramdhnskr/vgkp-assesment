#include<stdio.h>
#include<stdlib.h>
int linear_search(int *ptr, int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (*(ptr+i) == x)
            return i;
    return -1;
}
int binarySearch(int *p, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (*(p+m) == x)
            return m;
        if (*(p+m) < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    int n,x;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Input a number to search\n");
   scanf("%d", &x);
   printf("\nLinear search");
    int linearres=linear_search(arr,n,x);
    (linearres== -1)? printf("\nElement is not present in array")
                   : printf("\nElement is present at index %d",
                            linearres);
    printf("\nBinary search");
     int binres = binarySearch(arr, 0, n - 1, x);
     (binres== -1)? printf("\nElement is not present in array")
                   : printf("\nElement is present at index %d",
                            binres);


}
