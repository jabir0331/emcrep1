#include <stdio.h>
int add(int m[], int n)
{
    int i, sum=0;

    for (i=0; i<n; i++)
    {
        sum += m[2*i];
    }
    return sum;
}
int main()
{
    int arr[5] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = add(arr, n);
    printf("%d", res);
}