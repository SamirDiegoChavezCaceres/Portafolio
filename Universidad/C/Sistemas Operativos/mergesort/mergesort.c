//generate random n  array and return the array
int *generateRandomArray(int n)
{
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    return arr;
}