/*
time 
best O(1)
average and worse O(LOGN)

space O(1)
if the recursive call stack is considered then its O(LOGN)
*/

# include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
    if (r>=l)
    {
        int mid = l + (r-l)/2;

        if (arr[mid] == x)
        {
            return mid;
        }

        if (arr[mid] > x)
        {
            return binarySearch(arr, l, mid-1, x);
        }

        else 
        {
            return binarySearch(arr, mid+1, r, x);
        }
    }

    return (0);
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40, 75};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 40;
    int result = binarySearch(arr, 0, n-1, x);
    printf("%d\n", result);

    return(0);
}