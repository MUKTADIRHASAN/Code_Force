#include<stdio.h>

int main()
{
    int i, j, a, n;
    int arr[1000];

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; ++i)
    {
        for(j=i+1; j<n; ++j)
        {
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]= arr[j];
                arr[j]=a;
            }
        }
    }

    int ans=0;
    for(int i=0; i<n; i=i+2)
    {
        ans+=abs(arr[i]-arr[i+1]);
    }
    printf("%d\n", ans);

    return 0;
}
