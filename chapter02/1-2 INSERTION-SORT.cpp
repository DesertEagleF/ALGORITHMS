//INSERTION-SORT by descending/ascending order

void Insertion_Sort( int arr[], int n)
{
    int i, j;
    for (i = 1; i!= n; ++i)
    {
        for (j = i; j > 0 && arr[j] > arr[j-1]; --j)  //descending order
      //for (j = i; j > 0 && arr[j] < arr[j-1]; --j)  //ascending order
        {
            int tmp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
        }
    }
}
