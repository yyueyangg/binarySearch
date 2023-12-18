# include <stdio.h>
# include <math.h>


int binarySearch(int arr[], int l, int r, int x)
{
    while (l<=r)
    {
        int m = l + (r-l) / 2;

        // check if x is present at mid
        if (arr[m] == x)
        {
            return m;
        }

        // if x is greater, ignore left half, search right half
        if (arr[m] < x)
        {
            l = m + 1;
        }

        // if x is smaller, ignore right half, search left half
        else 
        {
            r = m-1;
        }
    }
    // if it reaches here, element is not present
    return (0);
}

int main()
{
    int arr[] = {4, 7, 8, 10, 50, 75};
    int x = 75;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n-1, x);
    printf("%d\n", result);
}