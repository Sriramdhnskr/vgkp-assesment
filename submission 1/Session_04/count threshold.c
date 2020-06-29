int count(int arr[],int x,int n)
{
    int TotalValue = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < x)
        {
            for (int j = i + 1; j < n; j++)
            {
                arr[j] += 1;
            }
        }
        else
        {
            TotalValue += 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] == 0)
                {
                    continue;
                }
                else
                {
                    arr[j] -= 1;
                }
            }
        }
    }
    return TotalValue;
}
int main()
{
    int n,res,x;
    scanf("%d %d",&n,&x);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    res=count(arr,x,n);
    printf("%d",res);
    return 0;
}
