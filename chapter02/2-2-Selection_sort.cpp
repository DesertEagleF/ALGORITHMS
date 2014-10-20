//selection sort
void selection_sort(int arr[], int len)
{
    if (arr = NULL || len < 1)
        return;
    int i , j;
    for (i = 0; i! = len-1; ++i)
    {
        for (j = i+1; j!=len; ++j)
        {
            if ( arr[j] < arr[i])
            {
                int tmp = =arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}
